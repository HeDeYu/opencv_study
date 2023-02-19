#include "opencv2/opencv.hpp"

void test_resize()
{
	auto img = cv::Mat::ones(256, 256, CV_8UC1) * 255;
	cv::imshow("img", img);
	cv::waitKey(0);

	cv::Mat dst;
	cv::Size dst_size{512, 512};

	cv::resize(img, dst, dst_size);
	cv::imshow("img_resize", dst);
	cv::waitKey(0);
}

void my_resize(const cv::Mat& src, cv::Mat& dst, const cv::Size& dsize)
{

}