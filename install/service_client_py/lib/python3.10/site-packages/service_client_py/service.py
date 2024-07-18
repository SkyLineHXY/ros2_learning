from example_interfaces.srv import AddTwoInts
from srv_msg_creating.srv import AddThreeInts
import rclpy
from rclpy.node import Node

class add_Service(Node):
    def __init__(self):
        super().__init__('add_service_py')
        self.service=self.create_service(AddThreeInts, 'add', self.add_callback)
    def add_callback(self,request, response):
        response.sum = request.a + request.b + request.c

        return response
        
def main(args=None):
    rclpy.init(args=args)
    node = add_Service()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()