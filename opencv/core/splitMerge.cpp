//#include<opencv2\opencv.hpp>
//#include<iostream>
//using namespace cv;
//using namespace std;
//
//bool MutiChannelBlending();
//
//int main()
//{
//	system("color 9F");
//
//	if(MutiChannelBlending())
//	{
//		cout<<endl<<"run success";
//	}
//	waitKey(0);
//	return 0;
//}
//
//bool MutiChannelBlending()
//{
//	Mat srcImage;
//	Mat logoImage;
//	vector<Mat> channels;
//	Mat imageBlueChannels;
//
//
//	logoImage = imread("dota_logo.jpg",0);
//	srcImage = imread("dota_jugg.jpg");
//
//	split(srcImage,channels);
//
//	imageBlueChannels = channels.at(0);
//	addWeighted(imageBlueChannels(Rect(500,250,logoImage.cols,logoImage.rows)),1.0,
//		logoImage,0.5,0,imageBlueChannels(Rect(500,250,logoImage.cols,logoImage.rows)));
//
//	merge(channels,srcImage);
//
//	namedWindow("1.result");
//	imshow("1.blue",srcImage);
//
//
//	Mat imageGreenChannels;
//	logoImage = imread("dota_logo.jpg",0);
//	srcImage = imread("dota_jugg.jpg");
//
//	split(srcImage,channels);
//
//	imageGreenChannels = channels.at(1);
//	addWeighted(imageGreenChannels(Rect(500,250,logoImage.cols,logoImage.rows)),1.0,
//		logoImage,0.5,0,imageGreenChannels(Rect(500,250,logoImage.cols,logoImage.rows)));
//
//	merge(channels,srcImage);
//
//	namedWindow("2.result");
//	imshow("2.green",srcImage);
//
//	
//	Mat imageRedChannels;
//	logoImage = imread("dota_logo.jpg",0);
//	srcImage = imread("dota_jugg.jpg");
//
//	split(srcImage,channels);
//
//	imageRedChannels = channels.at(2);
//	addWeighted(imageRedChannels(Rect(500,250,logoImage.cols,logoImage.rows)),1.0,
//		logoImage,0.5,0,imageRedChannels(Rect(500,250,logoImage.cols,logoImage.rows)));
//
//	merge(channels,srcImage);
//
//	namedWindow("3.result");
//	imshow("3.red",srcImage);
//	
//	return true;
//}
//
//
