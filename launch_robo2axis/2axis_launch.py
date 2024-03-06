from launch import LaunchDescription
from launch.actions import ExecuteProcess
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        ExecuteProcess(cmd=['stty' ,'-F', '/dev/ttyACM0', '115200']
        ),
        Node(
            package='robo2axis_serial',
            executable='robo2axis_serial'
        ),
        Node(
            package='robo2axis_pid',
            executable='robo2axis_pid'
        )
    ])
