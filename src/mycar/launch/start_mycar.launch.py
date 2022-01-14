import os
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import DeclareLaunchArgument, EmitEvent, RegisterEventHandler


def generate_launch_description():
    package_name = 'mycar'
    urdf_name = "mycar.urdf"
    

    ld = LaunchDescription()
    pkg_share = FindPackageShare(package=package_name).find(package_name) 
    urdf_model_path = os.path.join(pkg_share, f'urdf/{urdf_name}')

    # rviz_config 路径配置
    # (LaunchConfiguration:主要作用可以通过命令行传递参数)
    # ros2 launch my_packages launch_test.launch.py rviz_config:=my_value1
    rviz_config_file = LaunchConfiguration('rviz_config')
    
    declare_rviz_config_file_cmd = DeclareLaunchArgument(
        'rviz_config',
        default_value=os.path.join(pkg_share, 'config', 'show_mycar.rviz'),
        description='Full path to the RVIZ config file to use')

    # test
    print("~~~~~~~~~~~~`",os.path.join(pkg_share, 'config', 'show_mycar.rviz'))
    print("~~~~~~~~~~~~!",rviz_config_file.describe(),
                          rviz_config_file.variable_name
                          )


    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        arguments=[urdf_model_path]
        )

    

    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        arguments=[urdf_model_path]
        )

    # 该节点用于支持关节旋转
    joint_state_publisher_node_gui = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui',
        arguments=[urdf_model_path]
        )

    rviz2_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        # 记载rviz2 配置文件
        arguments=['-d', rviz_config_file],
        output='screen',
        )

    # Declare the launch options
    ld.add_action(declare_rviz_config_file_cmd)

    # action
    ld.add_action(robot_state_publisher_node)
    ld.add_action(joint_state_publisher_node)
    ld.add_action(joint_state_publisher_node_gui)
    ld.add_action(rviz2_node)

    return ld
