from example_interfaces.srv import AddTwoInts
from srv_msg_creating.srv import AddThreeInts
import rclpy
import sys
from rclpy.node import Node

class Client(Node):

    def __init__(self):
        super().__init__('add_client_py')
        self.cli=self.create_client(AddThreeInts, 'add')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req=AddThreeInts.Request()
    def send_request(self,a,b,c):
        self.req.a=a
        self.req.b=b
        self.req.c=c
        return self.cli.call_async(self.req) #异步方式发送请求
    
def main(args=None):
    rclpy.init(args=args)
    node = Client()
    print(sys.argv)
    future = node.send_request(int(sys.argv[1]),
                               int(sys.argv[2]),
                               int(sys.argv[3]))
    rclpy.spin_until_future_complete(node,
                                     future=future)
    response= future.result()
    node.get_logger().info(
        'Result of add_two_ints: for %d + %d + %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]),int(sys.argv[3]), response.sum))
    node.destroy_node()
    rclpy.shutdown()
