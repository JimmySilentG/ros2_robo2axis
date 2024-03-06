from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robo2axis_serial',
            executable='robo2axis_serial'
        ),
        Node(
            package='robo2axis_pid',
            executable='robo2axis_pid'
        )
    ])
