#!/bin/bash
cd ~/catkin_ws
source /opt/ros/kinetic/setup.bash
source ./devel/setup.bash
rosrun mavros_tutorial offboard_imaging
