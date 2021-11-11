#include <iostream>

#include <QtCore/QCoreApplication>

#include <opencv2/opencv.hpp>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
	
	std::cout << "hello, world!" << std::endl;
	std::cout << "hello, world!" << std::endl;
	std::cout << "hello, world!" << std::endl;
	
	cv::Mat image = cv::imread("D:\\MeiNaLL\\testFiles\\images\\image01-20211028.PNG");
	
	cv::imshow("display image", image);

    return a.exec();
}
