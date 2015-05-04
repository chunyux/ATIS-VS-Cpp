#include <iostream>
#include <vector>
#include "champMarkov.h"
#include "EventMatrix.h"
//#include <opencv2\opencv.hpp>

using namespace std;
//using namespace cv;


int main(){
	LoadData dataLoader("C:\\Users\\Chunyu\\Documents\\Visual Studio 2013\\Projects\\atis\\atis\\eventTest.txt");

	while (1){
		dataLoader.load(dataLoader.sp_beg);

		EventMatrix* eventMatrixp = new EventMatrix(dataLoader);
		/*
		string imagename = "C:\\Users\\Chunyu\\Documents\\visual studio 2013\\Projects\\atis\\atis\\test.jpg";
		Mat img = imread(imagename);
	
		namedWindow("image", 1);
		imshow("image", img);
		*/
		eventMatrixp->matrix2txt();
		dataLoader.events.swap(vector<SingleEvent>());
		delete eventMatrixp;

	}
	return 1;
}