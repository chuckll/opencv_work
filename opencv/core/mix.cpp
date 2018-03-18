//#include<opencv2\opencv.hpp>
//#include<opencv2\imgproc\imgproc.hpp>
//#include<iostream>
//
//using namespace std;
//using namespace cv;
//
//
//
//bool ROI_AddImage();
//bool LinearBlending();
//bool ROI_LinearBlending();
//
//int main()
//{
//	system("color 5E");
//	
//	if(ROI_AddImage()&&LinearBlending()&&ROI_LinearBlending())
//	{
//		cout<<endl<<"run success";
//	}
//
//
//	waitKey(0);
//	return 0;
//}
//
//bool ROI_AddImage()
//{
//	Mat srcImage1 = imread("dota_pa.jpg");
//	Mat logoImage = imread("dota_logo.jpg");
//	
//	Mat imageROI = srcImage1(Rect(200,250,logoImage.cols,logoImage.rows));
//
//	Mat mask = imread("dota_logo.jpg",0);
//
//	logoImage.copyTo(imageROI,mask);
//
//	namedWindow("result1");
//	imshow("ROI Image adding",srcImage1);
//
//	return true;
//
//}
//
//
//bool LinearBlending()
//{
//	double alphaValue = 0.5;
//	double betaValue;
//	Mat srcImage2,srcImage3,dstImage;
//
//	srcImage2 = imread("mogu.jpg");
//	srcImage3 = imread("rain.jpg");
//
//	betaValue = 1.0 - alphaValue;
//	addWeighted(srcImage2,alphaValue,srcImage3,betaValue,0.0,dstImage);
//
//	namedWindow("result2");
//	imshow("Liner mix",dstImage);
//
//	return true;
//
//}
//
//
//bool ROI_LinearBlending()
//{
//	Mat srcImage4 = imread("dota_pa.jpg",1);
//	Mat logoImage = imread("dota_logo.jpg");
//
//	Mat imageROI;
//	
//	imageROI = srcImage4(Rect(200,250,logoImage.cols,logoImage.rows));
//
//	addWeighted(imageROI,0.5,logoImage,0.3,0.,imageROI);
//
//	namedWindow("result3");
//	imshow("ROI Liner mix",srcImage4);
//	return true;
//}
