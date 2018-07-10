//#include<opencv2\opencv.hpp>
//#include<opencv2\highgui\highgui.hpp>
//#include<opencv2\imgproc\imgproc.hpp>
//using namespace cv;
//
//
//int main()
//{
//	Mat grad_x,grad_y;
//	Mat abs_grad_x,abs_grad_y,dst;
//
//	Mat src = imread("1.jpg");
//
//	imshow("original",src);
//
//	Sobel(src,grad_x,CV_16S,1,0,3,1,1,BORDER_DEFAULT);
//	convertScaleAbs(grad_x,abs_grad_x);
//	imshow("X",abs_grad_x);
//
//	Sobel(src,grad_y,CV_16S,0,1,3,1,1,BORDER_DEFAULT);
//	convertScaleAbs(grad_y,abs_grad_y);
//	imshow("Y",abs_grad_y);
//
//	addWeighted(abs_grad_x,0.5,abs_grad_y,0.5,0,dst);
//	imshow("result",dst);
//
//	waitKey(0);
//	return 0;
//
//}