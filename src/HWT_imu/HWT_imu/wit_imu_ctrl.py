import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from sensor_msgs.msg import MagneticField


class SetNode(Node):
    def __init__(self):
        super().__init__('set_node')
        self.subscription = self.create_subscription(
            MagneticField,
            '/imu/mag',  # Accept topic name
            self.listener_callback,
            10
        )
        self.publisher = self.create_publisher(String, 'wit/cali', 10)
    
    def listener_callback(self, msg):
        self.get_logger().info('Received MagneticField data')

    def publish_cmd(self, cmd):
        self.publisher.publish(String(data=cmd))
        self.get_logger().info(f'Published command: {cmd}')
        
def show_help():
    print("----------------------------")
    print("0: exti cali mode")
    print("9: enter mag cali mode")
    print("h: show cmd help")
    print("e: exti sys")
    print("v: show version")
    print("b: begin recording")
    print("s: stop recording")
    print("rate: set 0.2~200Hz output")
    print("baud: set 4800~230400 baud")
    print("rsw: set output data <time,acc,gyro,angle,mag>")
    print("----------------------------")

def main(args=None):
    rclpy.init(args=args)
    node = SetNode()
    try:
        show_help()
        while rclpy.ok():
            try:
                string = input("input cmd:")
                if 'rate' in string:
                    node.publish_cmd(string)
                    print("change " + string)
                elif 'rsw' in string:
                    node.publish_cmd('rsw')
                elif 'baud' in string:
                    node.publish_cmd(string)
                    print("change " + string)
                elif 'b' in string:
                    node.publish_cmd("begin")
                    print("begin recording")
                elif 's' in string:
                    node.publish_cmd("stop")
                    print("stop recording")
                elif 'v' in string:
                    node.publish_cmd("version")
                    print("show sensor version")
                elif 'h' in string:
                    show_help()
                elif 'e' in string:
                    print("exti sys\n")
                    node.destroy_node()
                    rclpy.shutdown()
                    exit(0)
                elif '0' in string:
                    node.publish_cmd("exti")
                    print("exti cali mode")
                elif '9' in string:
                    node.publish_cmd("mag")
                    print("enter mag cali mode")
                else:
                    print("{} cmd no support".format(string))
            except Exception as e:
                node.get_logger().error(e)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()