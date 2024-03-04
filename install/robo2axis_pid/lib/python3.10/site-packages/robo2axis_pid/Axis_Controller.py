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

pi = 3.14159

class PID_Axis_Controller(Node): #define a new class based upon the already defined Node class

    def __init__(self, setpoint): #setpoint defined in Radians (+-)
        super().__init__('PID_Axis_Controller_node') #construct this class based on the Node class with super.() and name the node
        self.time = int(self.get_clock().now().nanoseconds) #integer measure of start time in nanoseconds of when PID axis controller begins
        self.setpoint = setpoint #creates a class attiribute of parameter so it can be used in startcalc callback
        self.subscription = self.create_subscription(EncoderCounts, 'Encoder_Count_Topic', self.start_calc, 1) #creates a subscription to the encoder counts topic with start calc callback funciton and a history depth of 1(callback function is automatically handed encoder counts message)
        self.subscription  # prevent unused variable warning
        self.publisher = self.create_publisher(DutyCycle,'Waist_PID_Command',1) #creates publisher to Waist PID Command topic with message type DutyCycle
        self.create_timer(0.004, self.DC_publish) #if a message to the subscription is not found in the first period this could fail(utilizes forward decleration which isnt ideal but works in this case) .004 is 250hz which is what we want.
        self.p_err_prev = 0
        self.i_err = 0

    def start_calc(self, msg):
        #self.get_logger().info('PID saw axis1 = "%d" and axis2 = "%d"' % (msg.axis1, msg.axis2))
        Kp = 1 #proportional constant, all variables need to be tuned (maybe make these parameters so i can modify on launch?)
        Ki = 0 #integral constant
        Kd = 0 #derivative constant

        Encoder_count = msg.axis1 #assigns axis 1 encoder count from subscription to variable
        Rad_count = (float(Encoder_count)/1203.2)*2*(pi/3.5) #convert encoder count to radian measure

        #proportional calc
        self.p_err = self.setpoint - Rad_count #calculation of proportional error
        
        #integral calc
        dt = (int(self.get_clock().now().nanoseconds) - self.time)/1000000000 #calculate change in time (need to insert some sort of error for very large dt's that cause craziness)
        self.i_err += ((self.p_err_prev + self.p_err)/2)*dt #trapezoidal integral approximation

        #derivative calc
        d_err = (self.p_err - self.p_err_prev)/dt

        #PID output with clamping
        DC_out = Kp*self.p_err + Ki*self.i_err + Kd*d_err

        if DC_out > 100.0: #simple clamping logic
            DC_out = 100.0
        elif DC_out < -100.0:
            DC_out = -100.0

        #need to have some more logic here to prevent integral windup over long periods of time
        
        #variable handling
        self.p_err_prev = self.p_err #previous proportional is now the current for next loop
        self.time = int(self.get_clock().now().nanoseconds) #end of PID calulation is end of loop and will determine dt to next loop (assumes once calculation is made the command to motor is made instantanously which i think is reasonable???)
        
        #calculate and assign to class attribute so it can be referenced by the timer
        self.msg_out = DutyCycle()
        self.msg_out.dcpercent = DC_out 
        self.get_logger().info('%.3f, %.3f, %.8f, %.3f, %.3f, %.3f' % (self.p_err, self.i_err, d_err, dt, Rad_count, DC_out)) #log it so i know shit is working
        
        #clock = self.get_clock() #gets the clock from the node created (not sure if this clock starts ros starts or when this executable starts)
        #self.get_logger().info('Type: %f' % self.timestart)

    def DC_publish(self): #function used as callback to publish calculated PID at specified rate
        self.publisher.publish(self.msg_out) #can use try logic here to get this to skip over dead packets and continue working

def main(args=None):
    rclpy.init(args=args)
    robosetpoint = pi/2 #setpoint of positive 90 degrees from start, will eventually come from opencv ROS2 node
    PID_Axis_Controller_node = PID_Axis_Controller(robosetpoint)

    rclpy.spin(PID_Axis_Controller_node) #no reason this node shouldnt run continuously
    #while rclpy.ok():
        #rclpy.spin_once(PID_Axis_Controller_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    PID_Axis_Controller_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()