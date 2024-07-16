from example_interfaces.srv import AddTwoInts
import rclpy
import sys
from rclpy.node import Node

class Client(Node):

    def __init__(self):
        super().__init__('add_client_py')
        self.cli=self.create_client(AddTwoInts, 'add')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        self.req=AddTwoInts.Request()
    def send_request(self,a,b):
        self.req.a=a
        self.req.b=b
        return self.cli.call_async(self.req) #异步方式发送请求
    
def main(args=None):
    rclpy.init(args=args)
    node = Client()
    print(sys.argv)
    future = node.send_request(sys.argv[1],sys.argv[2])
    rclpy.spin_until_future_complete(node,
                                     future=future)
    response= future.result()
    node.get_logger().info(
        'Result of add_two_ints: for %d + %d = %d' %
        (int(sys.argv[1]), int(sys.argv[2]), response.sum))
    node.destroy_node()
    rclpy.shutdown()
