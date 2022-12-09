import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry


class Sub(Node):

    def __init__(self):
        super().__init__('sub')
        self.subscriber_ = self.create_subscription(
            Odometry,            
            'robot_namespace_0/odom',
            self.odom_callback,
            10
        )
               
    def odom_callback(self,msg):
        self.get_logger().info('remaining distance: "%s"' % msg.data)
                  
def main(args=None):
     rclpy.init(args=args)
     node = Sub()
     try:
         rclpy.spin(node)
     except KeyboardInterrupt:
         node.get_logger().info('Keyboard Interrupt (SIGINT)')
     finally:
         node.destroy_node()
         rclpy.shutdown()
         
if __name__ == '__main__':
    main()

