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
from robo2axis_data_strcs.msg import EncoderCounts #import custom message interface to store encoder counts
import serial #import python serial to access serial port
import time #import time


class PID_Axis_Controller(Node): #define a new class based upon the already defined Node class

    def __init__(self):
        super().__init__('PID_Axis_Controller_node') #construct this class based on the Node class with super.() and name the node
        self.subscription = self.create_subscription(EncoderCounts, 'Encoder_Count_Topic', self.start_calc, 1)
        self.subscription  # prevent unused variable warning

    def start_calc(self, msg):
        self.get_logger().info('PID saw axis1 = "%d" and axis2 = "%d"' % (msg.axis1, msg.axis2))
        #lets just get the bot to turn 90 degrees every power on so maually make setpoint 300.8/4 on axis 1

    def PID_calculation(self, first, second, setpoint1 = 0, setpoint2 = 0): #once implimented correctly this setpoint will come from MY EYES
        #have to decide if I want to do pwm conversion in here or not but just output a number 0-100 for a duty cycle of the pwm wave
        return



def main(args=None):
    rclpy.init(args=args)

    PID_Axis_Controller_node = PID_Axis_Controller()

    rclpy.spin(PID_Axis_Controller_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    PID_Axis_Controller_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()