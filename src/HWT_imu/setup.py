from setuptools import find_packages, setup

package_name = 'HTW_imu'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='zzq',
    maintainer_email='2391384401@qq.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'wit_imu_ctrl = HWT_imu.wit_imu_ctrl:main',
            'get_imu_rpy = HWT_imu.get_imu_rpy:main',
            'wit_modbus_ros = HWT_imu.wit_modbus_ros:main'
        ],
    },
)
