import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from tf2_ros import TransformBroadcaster
from geometry_msgs.msg import TransformStamped
import tf_transformations

class get_IMU_node(Node):
    def __init__(self):
        super().__init__('get_imu')
        self.create_subscription(Imu, "/wit/imu", self.callback,10) 
    def callback(self, msg):
        # This function is from tf2_ros, which can convert quaternion to Euler angles
        quaternion = (
            msg.orientation.x,
            msg.orientation.y,
            msg.orientation.z,
            msg.orientation.w
        )
        euler = tf_transformations.euler_from_quaternion(quaternion)
        roll, pitch, yaw = euler
        # Convert radians to degrees
        # Publish transform
        # ts = TransformStamped()
        # ts.header.stamp = self.get_clock().now().to_msg()
        # ts.header.frame_id = "imu_frame"
        # ts.child_frame_id = "base_link"
        # ts.transform.translation.x = msg.position.x
        # ts.transform.translation.y = msg.position.y
        # ts.transform.translation.z = msg.position.z
        # ts.transform.rotation.x = quaternion[0]
        # ts.transform.rotation.y = quaternion[1]
        # ts.transform.rotation.z = quaternion[2]
        # ts.transform.rotation.w = quaternion[3]
        # self.tf_broadcaster.sendTransform(ts)

def main(args=None):
    rclpy.init(args=args)
    node = get_IMU_node()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()