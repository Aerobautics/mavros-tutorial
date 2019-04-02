#include <opencv2/opencv.hpp>
#include <iostream>
#include "ros/ros.h"
#include "sensor_msgs/Image.h"

void rawImageCallback(const sensor_msgs::Image::ConstPtr& msg) {

}

int main(int argc, char *argv[]) {
	ros::init(argc, argv, "offboard_imaging_node");
	ros::NodeHandle nodeHandle;
	ros::Subscriber imageSubscriber;
	cv::namedWindow("Offboard Imaging", cv::WINDOW_AUTOSIZE);
	cv::VideoCapture capture;
	cv::Mat frame;

	imageSubscriber = nodeHandle.subscribe<sensor_msgs::Image>("image_raw", 32, &rawImageCallback);
	
	ros::spin();
	
	return 0;
}
