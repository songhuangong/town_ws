#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
# 1. 导入消息类型
from std_msgs.msg import String, UInt32



class WriterNode(Node):
    """
    创建一个李四节点，并在初始化时输出一个话
    """
    def __init__(self,name):
        super().__init__(name)
        self.get_logger().info("大家好，我是%s,我是张三！" % name)
        # 2.创建并初始化发布者成员属性pubnovel
        self.sub = self.create_subscription(String,"sexy_girl", self.girl_call_back, 10)


    def girl_call_back(self, msg):
        """
        定时器回调函数
        """
        self.get_logger().info('阅读中。。。。："%s"' % msg.data)    #打印一下发布的数据，供我们看




def main(args=None):
    """
    ros2运行该节点的入口函数
    1. 导入库文件
    2. 初始化客户端库
    3. 新建节点
    4. spin循环节点
    5. 关闭客户端库
    """
    rclpy.init(args=args) # 初始化rclpy
    node = WriterNode("zhang3")  # 新建一个节点
    rclpy.spin(node) # 保持节点运行，检测是否收到退出指令（Ctrl+C）
    rclpy.shutdown() # 关闭rclpy
    
