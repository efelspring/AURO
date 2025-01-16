from setuptools import find_packages
from setuptools import setup

setup(
    name='assessment_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('assessment_interfaces', 'assessment_interfaces.*')),
)
