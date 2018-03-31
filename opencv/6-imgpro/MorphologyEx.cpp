#include<opencv2\opencv.hpp>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\imgproc\imgproc.hpp>

using namespace cv;


int main()
{
	Mat image = imread("1.jpg");

	imshow("[original]",image);

	Mat element = getStructuringElement(MORPH_RECT,Size(15,15));

	morphologyEx(image,image,MORPH_BLACKHAT,element);

	imshow("[result]",image);

	waitKey(0);

	return 0;




}