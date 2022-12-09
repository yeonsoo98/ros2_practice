import rclpy
from rclpy.node import Node
from tutorial_interfaces.msg import RobotInfo
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry


class Pub(Node):

    def __init__(self):
        super().__init__('pub')
        
        # target robot
        self.info_publisher = self.create_publisher(
            RobotInfo,
            'robot_namespace_0/info',
            10)        

        # robot speed 
        self.cmd_vel_publisher = self.create_publisher(
            Twist,
            'robot_namespace_0/cmd_vel',
            self.cmd_vel_callback,
            10
        )
        self.cmd_vel_publisher

        # robot move 
        self.odom_publisher = self.create_publisher(
            Odometry,
            'robot_namespace_0/odom',
            self.odom_callback,
            10
        )
        self.odom_publisher

        self.info_msg = RobotInfo()

# response
    # robot cmd_vel callback
    def cmd_vel_callback(self, msg):
    
        self.info_msg.speed.linear.x = msg.linear.x
        self.info_msg.speed.angular.x = msg.angular.x     

    # robot odom callback
    def odom_callback(self, msg) :

        self.info_msg.position.x = msg.pose.pose.position.x


def main(args=None):
     rclpy.init(args=args)

     node = Pub()
     try:
         rclpy.spin(node)
     except KeyboardInterrupt:
         node.get_logger().info('Keyboard Interrupt (SIGINT)')
     finally:
         node.destroy_node()
         rclpy.shutdown()
         
if __name__ == '__main__':
    main()

