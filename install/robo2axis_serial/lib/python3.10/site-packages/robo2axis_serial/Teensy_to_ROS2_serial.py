# Licensed under *************,;
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy #import python client library
from rclpy.node import Node #import node class for our class defintion
#from rclpy.qos import(maybe try to get sensor data profile if shit is buggy)
from robo2axis_data_strcs.msg import EncoderCounts, DutyCycle#import custom message interface to store encoder counts
import serial #import python serial to access serial port
import time #import time
import struct #imports struct library that should come with python by default

class Teensy_to_ROS2_Serial(Node): #define a new class based upon the already defined Node class

    def __init__(self):
        super().__init__('Teensy_to_ROS2_Serial_node') #construct this class based on the Node class with super.() and name the node
        self.publisher = self.create_publisher(EncoderCounts, 'Encoder_Count_Topic', 1) #create a publisher in this node with message type EncoderCounts and publish to the encoder count topic and give the topic a history depth of 1
        self.subscriber = self.create_subscription(DutyCycle, 'Waist_PID_Command', self.serial_packet_out,1)
        self.ser = serial.Serial('/dev/ttyACM0',115200,timeout = None) #open serial port assigned to teensy, this can change between ACMO and ACM1, set baudrate to 115200 even though teensy ignores it. timeout set to none so the port waits forever until the requested number of bytes are recieved
        time.sleep(2) #sleep program for 2 seconds to give teensy time to reload/start sending data stream

    def publish_serial(self, first): #method used to publish serial data
        msg = EncoderCounts() #assign the encoder counts class import to msg variable
        msg.axis1 = first #assign first parameter to axis1 attribute of the custom message
        msg.axis2 = 0 #assign second paramter to axis2 attribute of the custom message (set to zero now that base is only active PID)
        self.publisher.publish(msg) #publish the message to the encoder_count_topic defined in class constuction
        self.get_logger().info('Publishing Encoder Counts: axis1 = %d' % (first)) #log the publishing with INFO level status and axis info sent (disabled again to test Axis Controller)

    def clear_buffer(self): #method used to clear the buffer of the incoming data
        self.ser.reset_input_buffer()

    def fetch_packet(self): #method used to search for two 0xAA or 170 byte sequence signifing start of data packet. Does not confirm full packet is sent, reads next 8 bytes no matter what they are
        startline1 = self.ser.read(1) #read first byte available in buffer and assign it to startline1 variable
        startline2 = self.ser.read(1) #read second byte available in buffer and assign it to startline2 variable
        count = 0 #count variable used to control excessively bad packets sent
        while (startline1 != b'\xaa') and (startline2 != b'\xaa'): #while the last two bytes read are not the starting 0xAA bytes...
            startline1 = self.ser.read(1) #reassign variables to next two byte sequence (realizing now that this could be better by stepping through each next byte in the event of getting the first byte chopped off and would imporove performance)
            startline2 = self.ser.read(1) #these obviously read one byte at a time from serial
            count += 1 #add one to the count
            if count > 5: #if count is above 5 you have stepped through two consecutive chances at getting good data and signifys that crappy data is being sent or something else is wrong
                return #something is wrong with data sender so return with nothing to break code
        return self.ser.read(4) #once while loop exits the next 4 bytes will be axis encoder counts so read and return (if partial packets are dropped this could be an issue but we should be okay)
        #still getting some incomplete packets that are publishing crazy values but not too bad

    def serial_packet_out(self, msg): #called everytime subscriber node sees new message on topic which should be at 250hz
        DutyCycle = msg.dcpercent #message saved to local attribute
        DutyCycleBytes = struct.pack('f', DutyCycle) #package python float into 4 byte transmission to be send off(check struct documentation for byte order if necessary)
        self.ser.write(b'\xaa') #first write two 170 bytes to serial to tell teensy next 4 bytes are pid command
        self.ser.write(b'\xaa') #this technique is susiptible to dropped and partial packets but at 250hz we should be fine with 1 or 2 bad packets
        self.ser.write(DutyCycleBytes) #write floating point duty cycle from PID calculation to serial for teensy to see
        

#need to make a timer that somehow only pulls from waist pid command topic and sends to teensy at 500hz to prevent overflow
def main(args=None):
    rclpy.init(args=args)

    Teensy_to_ROS2_Serial_node = Teensy_to_ROS2_Serial()

    while rclpy.ok(): #need to now impliment timer to pull down msg from PID waist command topic and send it over serial to teensy
        while Teensy_to_ROS2_Serial_node.ser.in_waiting < 6: #while waiting for complete packet to send, spin the node to process callbacks
            rclpy.spin_once(Teensy_to_ROS2_Serial_node, timeout_sec=0)
        if Teensy_to_ROS2_Serial_node.ser.in_waiting >= 6: #changed to 6 because we only have 1 motor on base using PID at the moment
            axis1val = Teensy_to_ROS2_Serial_node.fetch_packet()
            Teensy_to_ROS2_Serial_node.publish_serial(int.from_bytes(axis1val, 'little') - 2147483648) #instead of dealing with sending around a signed long, send an unsigned one and we will manually adjust middle count
            Teensy_to_ROS2_Serial_node.clear_buffer()
            rclpy.spin_once(Teensy_to_ROS2_Serial_node, timeout_sec=0)
        time.sleep(0.002) #sleep for 500th of a second to match that of teensy
        #remember to up speed of teensy before going ham on this sleep. I can get another teensy, not a rpi
        
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    Teensy_to_ROS2_Serial_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
