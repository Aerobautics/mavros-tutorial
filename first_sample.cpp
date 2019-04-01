#include <stdio.h>
#include <opencv2/opencv.hpp>

//using namespace cv;

int main(int argc, char* argv[])
{
	if (argc != 2) {
		printf("usage: DisplayImage.out <Image_Path>\n");
		return -1;
	}

	cv::Mat image;
	image = cv::imread( argv[1], 1 );

	if (!image.data) {
		printf("No image data \n");
		return -1;
	}

	cv::namedWindow("First Sample", cv::WINDOW_AUTOSIZE);
	cv::imshow("First Sample", image);
	cv::waitKey(0);
	cv::destroyWindow("First Sample");

	return 0;
}
