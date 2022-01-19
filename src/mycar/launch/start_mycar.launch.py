import os
import time
from launch import LaunchDescription
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import DeclareLaunchArgument, EmitEvent, RegisterEventHandler
from launch.actions import ExecuteProcess, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, Command
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.conditions import IfCondition, UnlessCondition

def generate_launch_description():
    package_name = 'mycar'
    # urdf_name = "mycar.urdf"
    # test_urdf_name = "test.urdf"
    xacro_name = "mycar.xacro"
    robot_name_in_model = 'mycar'
    world_file_path = 'worlds/box_house.world'

    use_sim_time = LaunchConfiguration('use_sim_time')
    
    declare_use_sim_time_cmd = DeclareLaunchArgument(
        name='use_sim_time',
        default_value='true',
        description='Use simulation (Gazebo) clock if true')

    declare_use_simulator_cmd = DeclareLaunchArgument(
        name='use_simulator',
        default_value='True',
        description='Whether to start the simulator')

    ld = LaunchDescription()
    pkg_share = FindPackageShare(package=package_name).find(package_name) 
    pkg_gazebo_ros = FindPackageShare(package='gazebo_ros').find('gazebo_ros') 
    world_path = os.path.join(pkg_share, world_file_path)

    # urdf_model_path = os.path.join(pkg_share, f'urdf/{urdf_name}')
    xacro_model_path = os.path.join(pkg_share, f'urdf/{xacro_name}')
    # test_urdf_name_path = os.path.join(pkg_share, f'urdf/{test_urdf_name}')

    # rviz_config 路径配置
    # (LaunchConfiguration:主要作用可以通过命令行传递参数)
    # ros2 launch my_packages launch_test.launch.py rviz_config:=my_value1
    rviz_config_file = LaunchConfiguration('rviz_config')
    
    declare_rviz_config_file_cmd = DeclareLaunchArgument(
        'rviz_config',
        default_value=os.path.join(pkg_share, 'config', 'show_mycar.rviz'),
        description='Full path to the RVIZ config file to use')

    # test
    print("!!~~~~~~~~~~~~`",os.path.join(pkg_share, 'config', 'show_mycar.rviz'))
    print("~~~~~~~~~~~~!",rviz_config_file.describe(),
                          rviz_config_file.variable_name
                          )
    world = LaunchConfiguration('world')

    declare_world_cmd = DeclareLaunchArgument(
        name='world',
        default_value=world_path,
        description='Full path to the world model file to load'
    )

    # 这里是直接加载urdf（改为下面的这种xacro的方式）
    # robot_state_publisher_node = Node(
    #     package='robot_state_publisher',
    #     executable='robot_state_publisher',
    #     arguments=[urdf_model_path]
    # )


    # 改为xacro的方式(这里直接通过Command将xacro转换为urdf）
    # 这里的use_sim_time目前不知道是干嘛用的
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{
                'use_sim_time': use_sim_time,
                'robot_description':Command(['xacro',' ', xacro_model_path])
            }]
    )
    
    # 和robot_state_publisher_node也需要xacro这个命令！
    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        # arguments=[urdf_model_path]
        parameters=[{ 
                'use_sim_time': use_sim_time,
                'robot_description':Command(['xacro',' ', xacro_model_path])
            }]
    )

    # 该节点用于支持关节旋转
    # joint_state_publisher_node_gui = Node(
    #     package='joint_state_publisher_gui',
    #     executable='joint_state_publisher_gui',
    #     name='joint_state_publisher_gui',
    #     arguments=[urdf_model_path]
    # )


    rviz2_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        # 记载rviz2 配置文件
        arguments=['-d', rviz_config_file],
        output='screen',
        )

    # Start Gazebo server
    start_gazebo_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(pkg_gazebo_ros, 'launch', 'gazebo.launch.py')),
        launch_arguments={'world': world}.items(),
    )

    # Start Gazebo server
    # start_gazebo_server_cmd = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')),
    #     launch_arguments={'world': world}.items(),
    # )
 
  # Start Gazebo client    
    # start_gazebo_client_cmd = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')),
    # )



    # Launch the robot（加载urdf产生机器人模型）
    spawn_entity_cmd = Node(
        package='gazebo_ros', 
        executable='spawn_entity.py',
        # 这种方式只能加载urdf文件，接下来改成加载xacro文件！
        # 将-file 换成-topic，因为 robot_description这个topic已经发布了
        arguments=[
            '-entity', robot_name_in_model,  
            # '-file', test_urdf_name_path 
            '-topic',  'robot_description'
            ], 
            output='screen'
    )



    # Declare the launch options
    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_use_simulator_cmd)
    ld.add_action(declare_rviz_config_file_cmd)
    ld.add_action(declare_world_cmd)
    

    # action
    ld.add_action(robot_state_publisher_node)
    ld.add_action(joint_state_publisher_node)
    # ld.add_action(joint_state_publisher_node_gui)
    ld.add_action(rviz2_node)
    # Gazebo相关
    ld.add_action(start_gazebo_cmd)
    # ld.add_action(start_gazebo_server_cmd)
    # ld.add_action(start_gazebo_client_cmd)
    ld.add_action(spawn_entity_cmd)

    return ld
