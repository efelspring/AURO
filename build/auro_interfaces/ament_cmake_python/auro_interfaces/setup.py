from setuptools import find_packages
from setuptools import setup

setup(
    name='auro_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('auro_interfaces', 'auro_interfaces.*')),
)
