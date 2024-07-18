from setuptools import find_packages
from setuptools import setup

setup(
    name='srv_msg_creating',
    version='0.0.0',
    packages=find_packages(
        include=('srv_msg_creating', 'srv_msg_creating.*')),
)
