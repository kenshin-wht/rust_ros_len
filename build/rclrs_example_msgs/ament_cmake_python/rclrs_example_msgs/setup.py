from setuptools import find_packages
from setuptools import setup

setup(
    name='rclrs_example_msgs',
    version='0.4.1',
    packages=find_packages(
        include=('rclrs_example_msgs', 'rclrs_example_msgs.*')),
)
