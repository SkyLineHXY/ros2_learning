import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/zzq/Desktop/ros2_ws/install/srv_msg_creating_py'
