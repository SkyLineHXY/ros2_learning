from launch import LaunchDescription #描述launch文件
from launch_ros.actions import Node #描述节点
from ament_index_python.packages import get_package_share_directory #获取包路径
def generate_launch_description():

    
    return LaunchDescription([
        Node(package = 'joy',
             executable = 'joy_node',),
        Node(package='beitong_joy',
             executable='joy_sub_demo',),
        Node(package='turtlesim',
             executable='turtlesim_node',)
    ])
