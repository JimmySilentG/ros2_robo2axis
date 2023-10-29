# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy #import python client library
from rclpy.node import Node #import node class for our class defintion
#from rclpy.qos import(maybe try to get sensor data profile if shit is buggy)
from robo2axis_data_strcs.msg import EncoderCounts #import custom message interface to store encoder counts
import serial #import python serial to acess serial port
import time #import time 

class Teensy_to_ROS2_Serial(Node):

    def __init__(self):
        super().__init__('Teensy_to_ROS2_Serial_node')
        self.publisher_ = self.create_publisher(EncoderCounts, 'Encoder_Count_Topic', 1)
        #(Dont have pwm format determined yet)self.subscriber = self.create_subscription()
        self.ser = serial.Serial('/dev/ttyACM0',115200,timeout = None) #timeout set to none so the port waits forever until the requested number of bytes are recieved
        time.sleep(2) #sleep for 3 seconds while the teensy reboots during connection

    def publish_serial(self, first, second):
        msg = EncoderCounts()
        msg.axis1 = first
        msg.axis2 = second
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing Encoder Counts: axis1 = %d axis2 = %d' % (first, second))

    def clear_buffer(self):
        self.ser.reset_input_buffer()

    def fetch_packet(self):
        startline1 = self.ser.read(1)
        startline2 = self.ser.read(1)
        count = 0
        while (startline1 != b'\xaa') and (startline2 != b'\xaa'):
            startline1 = self.ser.read(1)
            startline2 = self.ser.read(1)
            count += 1
            if count > 5:
                print('hey')
                return #something is wrong with data sender so return with nothing to break code
        return self.ser.read(4), self.ser.read(4) #still getting some incomplete packets that are publishing crazy values but not too bad
        


def main(args=None):
    rclpy.init(args=args)

    Teensy_to_ROS2_Serial_node = Teensy_to_ROS2_Serial()

    while rclpy.ok():
        #clear buffer and wait(await possibly?) for next 10 bytes then do this, if the first bytes arent what im looking for keep going untill you hit the two then start reading
        while Teensy_to_ROS2_Serial_node.ser.in_waiting < 10: #this method will get stuck if say the first byte gets chopped off, so need to add some sort of crawler functionality to crawl through a broken packet and get the loop back on track
            rclpy.spin_once(Teensy_to_ROS2_Serial_node, timeout_sec=0)
        if Teensy_to_ROS2_Serial_node.ser.in_waiting >= 10:
            axis1val, axis2val = Teensy_to_ROS2_Serial_node.fetch_packet()
            Teensy_to_ROS2_Serial_node.publish_serial(int.from_bytes(axis1val, 'little') - 2147483648, int.from_bytes(axis2val, 'little') - 2147483648)
            Teensy_to_ROS2_Serial_node.clear_buffer()
            rclpy.spin_once(Teensy_to_ROS2_Serial_node, timeout_sec=0)
        time.sleep(0.01)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    Teensy_to_ROS2_Serial_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
