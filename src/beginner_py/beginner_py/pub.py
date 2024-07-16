import rclpy                                       # ROS2 Python接口库
from rclpy.node   import Node                      # ROS2 节点类
from std_msgs.msg import String                    # 字符串消息类型
                             

class PublisherNode(Node):
    def __init__(self,name):
        super().__init__(name)
        self.publisher=self.create_publisher(msg_type=String,
                                           topic='chatter',
                                           qos_profile=10)
        self.timer = self.create_timer(timer_period_sec=1.0, 
                                       callback=self.publish)

    def publish(self):
        msg=String()
        msg.data=f'Hello, world!'
        # self.get_logger().info(msg)
        self.publisher.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)
        

def main(args=None):
    rclpy.init()                                   # 初始化ROS2环境
    node = PublisherNode('talker_py')                 # 创建节点对象
    
    rclpy.spin(node)                           # 进入消息循环，直到退出
    
    node.destroy_node()                      # 销毁节点对象
    rclpy.shutdown()                         # 关闭ROS2环境
        
if __name__ == '__main__':
    main()  