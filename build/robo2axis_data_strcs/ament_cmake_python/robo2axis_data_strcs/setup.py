from setuptools import find_packages
from setuptools import setup

setup(
    name='robo2axis_data_strcs',
    version='0.0.0',
    packages=find_packages(
        include=('robo2axis_data_strcs', 'robo2axis_data_strcs.*')),
)
