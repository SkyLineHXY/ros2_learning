from setuptools import find_packages, setup

package_name = 'beginner_py'

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
            'talker = beginner_py.pub:main',
            'listener = beginner_py.sub:main',
            'talkerpc2 = beginner_py.pub_pointcloud:main',
            'talkercv2 = beginner_py.pub_cv_image:main',
        ],
    },
)
