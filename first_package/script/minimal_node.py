#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class MinimalNode(Node):
    def __init__(self):
        super().__init__('minimal_node')
        self.get_logger().info('Minimal Node has been started.')

def main(args=None):
    rclpy.init(args=args)
    node= Node('echo_node_py')
    node.get_logger().info(f'Minimal Node has been started.{node.get_name()} ')
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
