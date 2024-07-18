import rclpy                                       # ROS2 Python接口库
from rclpy.node   import Node                      # ROS2 节点类
from std_msgs.msg import String                    # 字符串消息类型


# """
# 创建一个订阅者节点
# """

class SubscriberNode(Node):
    def __init__(self,name):
        super().__init__(name)
        # 创建订阅者
        self.subscription = self.create_subscription(String, 'chatter', self.callback,10)
    
    
    # """
    # 回调函数，当接收到消息时被调用
    # msg: 接收到的消息
    # """
    def callback(self, msg):
        self.get_logger().info("Received: %s" % msg.data)

def main(arg=None):
    rclpy.init(args=arg)
    node = SubscriberNode('subscriber')
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
    