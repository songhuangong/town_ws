import os
import time
from ament_index_python.packages import get_package_share_directory

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
    pkg_share = FindPackageShare(package=package_name).find(package_name) 


    xacro_name = "newcar.xacro"
    robot_name_in_model = "fishbot"
    # xacro_name = "mycar.xacro"
    # robot_name_in_model = 'mycar'

    world_file_path = 'worlds/big_house.world'
    # world_file_path = 'worlds/empty.world'

    map_file_path = 'maps/my_map.yaml'

    nav2_params_path = 'params/nav2_params.yaml'


    # nav2_dir = FindPackageShare(package='nav2_bringup').find('nav2_bringup') 
    nav2_dir = get_package_share_directory('nav2_bringup')
    nav2_launch_dir = os.path.join(nav2_dir, 'launch') 
    static_map_path = os.path.join(pkg_share, map_file_path)
    nav2_params_path = os.path.join(pkg_share, nav2_params_path)
    print("~~~~~~~static_map_path", static_map_path)

    # Launch configuration variables specific to simulation
    autostart = LaunchConfiguration('autostart')
    use_sim_time = LaunchConfiguration('use_sim_time')
    namespace = LaunchConfiguration('namespace')
    use_namespace = LaunchConfiguration('use_namespace')
    slam = LaunchConfiguration('slam')
    map_yaml_file = LaunchConfiguration('map')
    params_file = LaunchConfiguration('params_file')
    use_composition = LaunchConfiguration('use_composition')


    declare_use_composition_cmd = DeclareLaunchArgument(
        'use_composition', 
        default_value='True',
        description='Whether to compose bringup'
    )
    
    declare_use_sim_time_cmd = DeclareLaunchArgument(
        name='use_sim_time',
        default_value='True',
        description='Use simulation (Gazebo) clock if true')

    declare_use_simulator_cmd = DeclareLaunchArgument(
        name='use_simulator',
        default_value='True',
        description='Whether to start the simulator')

    declare_namespace_cmd = DeclareLaunchArgument(
        name='namespace',
        default_value='',
        description='Top-level namespace')

    declare_use_namespace_cmd = DeclareLaunchArgument(
        name='use_namespace',
        default_value='False',
        description='Whether to apply a namespace to the navigation stack')
    
    declare_slam_cmd = DeclareLaunchArgument(
        name='slam',
        default_value='False',
        description='Whether to run SLAM')


    declare_map_yaml_cmd = DeclareLaunchArgument(
        name='map',
        default_value=static_map_path,
        description='Full path to map file to load')
        
    declare_params_file_cmd = DeclareLaunchArgument(
        name='params_file',
        default_value=nav2_params_path,
        description='Full path to the ROS2 parameters file to use for all launched nodes')

    declare_autostart_cmd = DeclareLaunchArgument(
        name='autostart', 
        default_value='True',
        description='Automatically startup the nav2 stack')


    remappings = [('/tf', 'tf'),
                ('/tf_static', 'tf_static')]


    ld = LaunchDescription()
    
    pkg_gazebo_ros = FindPackageShare(package='gazebo_ros').find('gazebo_ros') 
    world_path = os.path.join(pkg_share, world_file_path)

    # urdf_model_path = os.path.join(pkg_share, f'urdf/{urdf_name}')
    xacro_model_path = os.path.join(pkg_share, f'urdf/{xacro_name}')
    # test_urdf_name_path = os.path.join(pkg_share, f'urdf/{test_urdf_name}')

    # rviz_config ????????????
    # (LaunchConfiguration:?????????????????????????????????????????????)
    # ros2 launch my_packages launch_test.launch.py rviz_config:=my_value1
    rviz_config_file = LaunchConfiguration('rviz_config')
    
    declare_rviz_config_file_cmd = DeclareLaunchArgument(
        'rviz_config',
        default_value=os.path.join(pkg_share, 'config', 'show_agv.rviz'),
        description='Full path to the RVIZ config file to use')

    world = LaunchConfiguration('world')

    declare_world_cmd = DeclareLaunchArgument(
        name='world',
        default_value=world_path,
        description='Full path to the world model file to load'
    )

    # ?????????????????????urdf????????????????????????xacro????????????
    # robot_state_publisher_node = Node(
    #     package='robot_state_publisher',
    #     executable='robot_state_publisher',
    #     arguments=[urdf_model_path]
    # )


    # ??????xacro?????????(??????????????????Command???xacro?????????urdf???
    # ?????????use_sim_time??????????????????????????????
    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{
                'use_sim_time': use_sim_time,
                'robot_description':Command(['xacro',' ', xacro_model_path],
                )
            }],
        remappings=remappings
    )

    
    # ???robot_state_publisher_node?????????xacro???????????????
    joint_state_publisher_node = Node(
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher',
        parameters=[{ 
                'use_sim_time': use_sim_time,
                'robot_description':Command(['xacro',' ', xacro_model_path])
            }],
        remappings=remappings
    )


    # ?????????????????????????????????
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
        # ??????rviz2 ????????????
        arguments=['-d', rviz_config_file],
        output='screen',
        remappings=remappings
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



    # Launch the robot?????????urdf????????????????????????
    spawn_entity_cmd = Node(
        package='gazebo_ros', 
        executable='spawn_entity.py',
        # ????????????????????????urdf??????????????????????????????xacro?????????
        # ???-file ??????-topic????????? robot_description??????topic???????????????
        arguments=[
            '-entity', robot_name_in_model,  
            # '-file', test_urdf_name_path, 
            '-topic',  'robot_description',
            '-x', '0.0',
            '-y', '0.0',
            '-z', '0.0',
            '-Y', '0.0',
            ], 
            output='screen'
    )


    # robot_localization_node = Node(
    #      package='robot_localization',
    #      executable='ekf_node',
    #      name='ekf_filter_node',
    #      output='screen',
    #      parameters=[os.path.join(pkg_share, 'config/ekf.yaml'), {'use_sim_time': LaunchConfiguration('use_sim_time')}]
    # )


    # Launch the ROS 2 Navigation Stack
    start_ros2_navigation_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(nav2_launch_dir, 'bringup_launch.py')),
        launch_arguments = {'namespace': namespace,
                            'use_namespace': use_namespace,
                            'slam': slam,
                            'map': map_yaml_file,
                            'use_sim_time': use_sim_time,
                            'params_file': params_file,
                            'autostart': autostart,
                            'use_composition': use_composition}.items())



    # Declare the launch options
    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_use_simulator_cmd)
    ld.add_action(declare_rviz_config_file_cmd)
    ld.add_action(declare_world_cmd)

    ld.add_action(declare_namespace_cmd)
    ld.add_action(declare_use_namespace_cmd)
    ld.add_action(declare_autostart_cmd)
    ld.add_action(declare_use_composition_cmd)

    ld.add_action(declare_map_yaml_cmd)
    ld.add_action(declare_params_file_cmd)
    ld.add_action(declare_slam_cmd)
    

    # Gazebo??????
    ld.add_action(start_gazebo_cmd)
    # ld.add_action(start_gazebo_server_cmd)
    # ld.add_action(start_gazebo_client_cmd)

    # ?????????????????????
    ld.add_action(spawn_entity_cmd)


    # action
    ld.add_action(robot_state_publisher_node)
    ld.add_action(joint_state_publisher_node)
    # ld.add_action(joint_state_publisher_node_gui)

    ld.add_action(rviz2_node)
    
    # ??????????????????
    # ld.add_action(robot_localization_node)



    
    
    
    # ??????nav2
    ld.add_action(start_ros2_navigation_cmd)

    return ld
