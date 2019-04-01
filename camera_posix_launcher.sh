#!/bin/bash
cd catkin_ws/src/Firmware/
source /opt/ros/kinetic/setup.bash 
source Tools/setup_gazebo.bash $(pwd) $(pwd)/build/px4_sitl_default
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:$(pwd)
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:$(pwd)/Tools/sitl_gazebo
#roslaunch px4 mavros_posix_sitl.launch vehicle:=iris_fpv_cam sdf:=/home/stewart/catkin_ws/src/Firmware/Tools/sitl_gazebo/models/iris_fpv_cam/iris_fpv_cam.sdf
roslaunch px4 camera_posix_launcher.launch my_model_name:=iris_fpv_cam
