//#include<opencv2\opencv.hpp>
//#include<opencv2\core\core.hpp>
//#include<opencv2\imgproc\imgproc.hpp>
//#include<opencv2\highgui\highgui.hpp>
//#include<iostream>
//using namespace cv;
//
//int main()
//{
//	Mat srcImage = imread("1.jpg",0);
//	imshow("ԭʼͼ",srcImage);
//
//	int m = getOptimalDFTSize( srcImage.rows);
//	int n = getOptimalDFTSize( srcImage.cols);
//
//	Mat padded;
//	copyMakeBorder(srcImage,padded,0,m - srcImage.rows,0,
//		n - srcImage.cols,BORDER_CONSTANT,Scalar::all(0));
//
//	Mat planes[] = { Mat_<float>(padded),Mat::zeros(padded.size(),
//		CV_32F)};
//	Mat complexI;
//	merge(planes,2,complexI);
//
//	dft(complexI,complexI);
//
//	split(complexI,planes);
//	magnitude(planes[0],planes[1],planes[0]);
//	Mat magnitudeImage = planes[0];
//
//	magnitudeImage += Scalar::all(1);
//	log(magnitudeImage,magnitudeImage);
//
//	magnitudeImage = magnitudeImage(Rect(0,0,magnitudeImage.cols & -2,
//		magnitudeImage.rows & -2));
//	int cx = magnitudeImage.cols/2;
//	int cy = magnitudeImage.rows/2;
//	Mat q0(magnitudeImage,Rect(0,0,cx,cy));
//	Mat q1(magnitudeImage,Rect(cx,0,cx,cy));
//	Mat q2(magnitudeImage,Rect(0,cy,cx,cy));
//	Mat q3(magnitudeImage,Rect(cx,cy,cx,cy));
//
//	Mat tmp;
//	q0.copyTo(tmp);
//	q3.copyTo(q0);
//	tmp.copyTo(q3);
//
//	q1.copyTo(tmp);
//	q2.copyTo(q1);
//	tmp.copyTo(q2);
//
//	normalize(magnitudeImage,magnitudeImage,0,1,CV_MINMAX);
//	normalize(magnitudeImage,magnitudeImage,0,1,NORM_MINMAX);
//
//	imshow("result",magnitudeImage);
//	waitKey();
//
//
//	return 0;
//}