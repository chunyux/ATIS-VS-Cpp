//#include <iostream>
#include "stdafx.h"
#include <deque>
//#include "champMarkov.h"
//#include "EventMatrix.h"
//#include <opencv2\opencv.hpp>

using namespace std;
//using namespace cv;

const int bufferLength = 2000;
const int updateLength = 1000;

int main(){
	DataList dataLoader("C://Users//xiang//Documents//Visual Studio 2008//Projects//helloWorld//helloWorld//eventRecord_28_04_15_18_10_08.txt");
	dataLoader.load(); //no parameter **interface designe [CHECKED]
	deque <SingleEvent> EventBuffer;
	list <SingleEvent>::iterator iterEventList;

	for(int ibufferLength = 0,iterEventList = dataLoader.eventList.begin(); ibufferLength <bufferLength ;ibufferLength ++,iterEventList++){
			EventBuffer.push_back(*iterEventList);
	}

	while (1){

		//push back 2000
		for(int iupdateLength = 0; iupdateLength < updateLength ;iupdateLength++,iterEventList++){
			EventBuffer.push_back(*iterEventList);
		}

		EventMatrix* pEventMatrix = new EventMatrix(dataLoader);
		

		pEventMatrix->matrix2txt();

		//pop_front 1000 events
		for(int iupdateLength = 0; iupdateLength < updateLength; iupdateLength ++){
			EventBuffer.pop_front();
		}
		delete pEventMatrix;

	}
	return 1;
}
