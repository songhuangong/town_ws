from setuptools import setup
from glob import glob
import os


package_name = 'mycar'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        # 起到一个拷贝的作用，拷贝到运行环境下
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
        #  glob **  表示递归支持！
        (os.path.join('share', package_name, 'urdf'), glob('urdf/**')),
        # 这里不能有层级关系（urdf/gazebo 这样不行。。）没办法，放平行
        (os.path.join('share', package_name, 'urdfgazebo'), glob('urdfgazebo/**')),
        (os.path.join('share', package_name, 'config'), glob('config/**')),
        (os.path.join('share', package_name, 'worlds'), glob('worlds/**')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='sto-technology',
    maintainer_email='lidairenr@163.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
