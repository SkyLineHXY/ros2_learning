import rclpy
from rclpy.node   import Node    
import numpy as np
from sensor_msgs.msg import PointCloud2
from sensor_msgs.msg import PointField
from sensor_msgs_py import point_cloud2
from std_msgs.msg import Header

class publisher_pointcloud(Node):

    rate = 30
    moving = True
    width = 10
    height = 10

    header = Header()
    header.frame_id = 'map'
    point_step = 16

    fields = [PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
              PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
              PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
              PointField(name='intensity', offset=12, datatype=PointField.FLOAT32, count=1)]

    def __init__(self):
        super().__init__('publisher_pointcloud')
        # self.get_logger().info("Hello World")
        self.pub = self.create_publisher(PointCloud2, 'points', 10)
        timer_period = 1 / self.rate
        self.timer = self.create_timer(timer_period_sec=timer_period,
                                       callback=self.timer_callback)
        self.counter = 0
    
    def timer_callback(self):
        self.header.stamp = self.get_clock().now().to_msg()
        x, y = np.meshgrid(np.linspace(-2, 2, self.width), np.linspace(-2, 2, self.height))
        z = 0.5 * np.sin(2*x-self.counter/10.0) * np.sin(2*y)
        points = np.array([x, y, z, z]).reshape(4, -1).T
        pc2_msg = point_cloud2.create_cloud(self.header, self.fields, points)
        self.pub.publish(pc2_msg)
        self.get_logger().info('Publishing: "%s"' % pc2_msg.data)
def main(args=None):
    rclpy.init(args=args)
    node = publisher_pointcloud()
    rclpy.spin(node)                           # 进入消息循环，直到退出
    node.destroy_node()      
    rclpy.shutdown()     
    
if __name__=='__main__':
    main()    