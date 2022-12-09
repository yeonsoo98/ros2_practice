import rclpy
from rclpy.node import Node
from tutorial_interfaces.msg import RobotInfo
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from sensor_msgs.msg import LaserScan
from std_msgs.msg import String
from rclpy.qos import QoSProfile

class Publisher(Node):

    def __init__(self):
        super().__init__('robot_info')
        qos_profile = QoSProfile(depth=10)

        # robot info_publisher
        self.info_publisher = self.create_publisher(
            RobotInfo,
            'robot_namespace_0/info',
            10)
    
        self.cmd_vel_subscriber = self.create_subscription(
            Twist,
            'robot_namespace_0/cmd_vel',
            self.cmd_vel_callback,
            10
        )

        self.cmd_vel_subscriber

        self.odom_subscriber = self.create_subscription(
            Odometry,
            'robot_namespace_0/odom',
            self.odom_callback,
            10
        )
        self.odom_subscriber

        self.scan_subscriber = self.create_subscription(
            LaserScan,
            'robot_namespace_0/scan',
            self.scan_callback,
            10
        )
        self.scan_subscriber

        # timer
        self.publisher_ = self.create_publisher(String, 'topic', qos_profile)
        timer_period= 1.0 # seconds
        self.timer = self.create_timer(timer_period,self.timer_callback)
        self.count = 0 
        # custom robot info 

        self.info_msg = RobotInfo()
    # timer
    def timer_callback(self):
         msg = String()
         msg.data = 'Robot Running: %d' % self.count
         self.publisher_.publish(msg)
         self.get_logger().info('running time: "%s"' % msg.data)
         self.count += 1

    # robot cmd_vel callback
    def cmd_vel_callback(self, msg):
    
        self.get_logger().info('linear x: "%s"' % msg.linear.x)
        self.get_logger().info('linear y: "%s"' % msg.linear.y)
        self.get_logger().info('angular x: "%s"' % msg.angular.z)
        self.info_msg.speed.linear.x = msg.linear.x
        self.info_msg.speed.linear.y = msg.linear.y
        self.info_msg.speed.angular.x = msg.angular.x

    # robot odom callback
    def odom_callback(self, msg) :

        self.get_logger().info('pose x: "%s"' % msg.pose.pose.position.x)
        self.get_logger().info('pose y: "%s"' % msg.pose.pose.position.y)
        self.get_logger().info('pose z: "%s"' % msg.pose.pose.position.z)
        self.info_msg.position.x = msg.pose.pose.position.x
        self.info_msg.position.y = msg.pose.pose.position.y
        self.info_msg.position.z = msg.pose.pose.position.z 

    # robot scan callback
    def scan_callback(self, msg) :
        if msg.ranges[180] < 1.0 :
            self.get_logger().warn('front :"%f"' % msg.ranges[180])
        self.info_msg.front_range = msg.ranges[180]

def main(args=None):
    rclpy.init(args=args)

    robot_info = Publisher()

    rclpy.spin(robot_info)

    robot_info.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()