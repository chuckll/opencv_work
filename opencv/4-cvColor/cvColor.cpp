#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\highgui\highgui.hpp>
using namespace cv;

void main()
{
	Mat srcImage = imread("1.jpg",1),dstImage;
	cvtColor(srcImage,dstImage,COLOR_BGR2Lab);
	imshow("result",dstImage);
	waitKey();
}