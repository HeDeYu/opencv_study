#include "opencv2/opencv.hpp"

void test_cv_mat()
{
	int a[2]{256, 256};
	int b[3]{ 256, 256, 256};
	//ones赋值只对第一通道赋1。
	cv::Mat img = cv::Mat::ones(256, 256, CV_8UC3) * 255;
	
	std::cout << img.rows << " " << img.cols << " " << img.channels() << std::endl;
	//通道不算在Mat的维度上，算在元素的数据结构上。
	std::cout << img.dims << std::endl;

	cv::Mat not_img = cv::Mat::ones(3, b, CV_8UC3) * 255;
	std::cout << not_img.dims << std::endl;

	//注意，data是uchar*，打印时会打印其指向的内容而非地址本身。
	std::cout << (void*)img.data << std::endl;
	std::cout << (void*) & (img.at<uchar>(0, 0)) << std::endl;

	//打印uchar数据先做转换，否则通常还要考虑偏移量48。
	std::cout << (int)img.at<uchar>(0) << std::endl;
	std::cout << (int)img.at<const uchar>(0) << std::endl;
	
	cv::Mat imgf = cv::Mat::ones(256, 256, CV_32FC3) * 15.5;
	std::cout << "32FC3" << imgf.at<float>(0) << std::endl;
}