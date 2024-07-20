import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
from geometry_msgs.msg import Twist

class JoySubscribe(Node):
    def __init__(self):
        super().__init__('joy_subscribe')
        self.subscription = self.create_subscription(Joy, 
                                                     '/joy', 
                                                     self.callback,
                                                     qos_profile=20)
        self.turtlevel_pub =self.create_publisher(Twist,
                                                    'turtle1/cmd_vel',
                                                    qos_profile=20)
        # spin() simply keeps python from exiting until this node is stopped
        self.get_logger().info("JoySubscribe init")
    def callback(self, msg: Joy) -> None:
        
        # msg.axes[0]--> x1
        # msg.axes[1]--> y1
        # msg.axes[2]--> x2
        # msg.axes[3]--> y2
        
        # msg.buttons[0]--> X
        # msg.buttons[1]--> A
        # msg.buttons[2]--> B
        # msg.buttons[3]--> Y  
        # msg.buttons[4]--> LB
        # msg.buttons[5]--> RB
        # self.get_logger().info(f'I heard: {msg}')
        # msg.axes[0]
        # self.get_logger().info(f'msg.ax[0]: {msg.axes[0]}\n msg.ax[1]:{msg.axes[1]}\n msg.ax[2]:{msg.axes[2]}\n msg.ax[3]:{msg.axes[3]}')
        # self.get_logger().info(f'button: {msg.axes[4]}')
        turtle_vel = Twist()
        turtle_vel.linear.x = msg.axes[1]*1.5
        turtle_vel.linear.y = msg.axes[0]*1.5
        turtle_vel.angular.z = msg.axes[2]*1.5
        self.turtlevel_pub.publish(turtle_vel)
        
        
def main(args=None):
    rclpy.init(args=args)
    joy_subscribe_node = JoySubscribe()
    try:
        rclpy.spin(joy_subscribe_node)
    except KeyboardInterrupt:
        pass
    joy_subscribe_node.destroy_node()
    rclpy.shutdown()