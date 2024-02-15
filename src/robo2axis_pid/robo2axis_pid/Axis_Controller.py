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
from robo2axis_data_strcs.msg import EncoderCounts, DutyCycle #import custom message interface to store encoder counts
import serial #import python serial to access serial port
import time #import time


class PID_Axis_Controller(Node): #define a new class based upon the already defined Node class

    def __init__(self):
        super().__init__('PID_Axis_Controller_node') #construct this class based on the Node class with super.() and name the node
        self.subscription = self.create_subscription(EncoderCounts, 'Encoder_Count_Topic', self.start_calc, 1) #creates a subscription to the encoder counts topic with start calc callback funciton and a history depth of 1
        self.subscription  # prevent unused variable warning
        self.publisher = self.create_publisher(DutyCycle,'Waist_PID_Command',1) #creates publisher to Waist PID Command topic with message type DutyCycle that I need to create :()
        self.RadPrev = 0 #axis will be told it is at "zero" radians once this PID node is created "this can cause issues if there is a dramatic change in location between plugging in teensy and turning on this node (robot is not stupid proof yet)
        self.pi = 3.14159

    def start_calc(self, msg):
        #self.get_logger().info('PID saw axis1 = "%d" and axis2 = "%d"' % (msg.axis1, msg.axis2))
        Kp = 1; #proportional constant all variables need to be tuned
        Ki = 0; #integral constant
        Kd = 0; #derivative constant
        Encoder_count = msg.axis1
        Rad_count = (float(Encoder_count)/300.8)*2*self.pi #convert encoder count to radian measure
        #proportional calc
        p_err = self.pi/2 - Rad_count
        self.get_logger().info('"%d"' % (Rad_count)) #only sending first digit, need it to send trailing decimal points but otherwise it launched!
        #lets just get the bot to turn 90 degrees every power on so maually make setpoint 300.8/4 on axis 1
        #integral calc
        #i_err = need to figure out how to access timing of the node to calculate i and d errors


def main(args=None):
    rclpy.init(args=args)

    PID_Axis_Controller_node = PID_Axis_Controller()
    
    rclpy.spin(PID_Axis_Controller_node)
    #while rclpy.ok():
        #rclpy.spin_once(PID_Axis_Controller_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    PID_Axis_Controller_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()