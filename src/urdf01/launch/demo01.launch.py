# 导入库
import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument

from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

from launch.substitutions import Command, LaunchConfiguration

import launch_ros
import os
import rclpy 


# 定义函数名称为：generate_launch_description
def generate_launch_description():
    # 路径配置
    pkg_share = FindPackageShare(package='urdf01').find('urdf01')
    print("pkg_share~~~~", pkg_share)
    default_urdf_model_path = os.path.join(pkg_share, 'urdf/urdf/demo01.urdf')
    #default_rviz_config_path = os.path.join(pkg_share, 'rviz/urdf_config.rviz')
    print("default_model_path~~~~", default_urdf_model_path)

    #
    use_sim_time = LaunchConfiguration('use_sim_time')
    urdf_model = LaunchConfiguration('urdf_model')

    #
    declare_urdf_modle_path_cmd = DeclareLaunchArgument(
        name="urdf_model",
        default_value=default_urdf_model_path,
        description="Abs path to robot urdf file"
    )

    declare_use_sim_time_cmd = DeclareLaunchArgument(
        name='use_sim_time',
        default_value='True',
        description='Use simulation (Gazebo) clock if true'
    )


    start_robot_state_publisher_cmd = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'use_sim_time': use_sim_time, 
                    'robot_description': Command(['xacro ', urdf_model])}],
        arguments=[default_urdf_model_path]
    )


    start_rviz_cmd = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
    )

    ld = LaunchDescription()

    # 申明 action 选项
    ld.add_action(declare_urdf_modle_path_cmd)
    ld.add_action(declare_use_sim_time_cmd)

    # 添加 action
    ld.add_action(start_robot_state_publisher_cmd)
    ld.add_action(start_rviz_cmd)
    
    
    return ld
