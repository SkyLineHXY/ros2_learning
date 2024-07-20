from launch import LaunchDescription #����launch�ļ�
from launch_ros.actions import Node #�����ڵ�
from ament_index_python.packages import get_package_share_directory #��ȡ��·��
def generate_launch_description():

    
    return LaunchDescription([
        Node(package = 'joy',
             executable = 'joy_node',),
        Node(package='beitong_joy',
             executable='joy_sub_demo',),
        Node(package='turtlesim',
             executable='turtlesim_node',)
    ])
