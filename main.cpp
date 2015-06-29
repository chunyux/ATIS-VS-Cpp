// This is the main entrance of program where we
// 1. read the txt(input)
// 2. load all events in txt into a list of events
// 3. load certain number of events(bufferLength) into AtisEventBuffer
// 4. put events from buffer into a 304*240 matrix
// 5. save matrix into another txt(as output)
// 6. update buffer(updateLength)

//	@Created by Chunyu XIANG 03/2015							

#include "stdafx.h"
#include <deque>

using namespace std;

const int bufferLength = 2000;
const unsigned short updateLength = 1000;

int main(){
	// 1. we read the txt
	DataList dataLoader("C://Users//xiang//Documents//Visual Studio 2008//Projects//helloWorld//helloWorld//eventRecord_28_04_15_18_10_08.txt");
	// 2. load all events in txt into a list of events
	dataLoader.load(); 
	AtisEventBuffer* pEventBuffer = new AtisEventBuffer(bufferLength);
	// 3. Initialise buffer and matrix
	pEventBuffer->init(dataLoader.eventList);
	EventMatrix* pEventMatrix = new EventMatrix();

	while (1){

		if(pEventBuffer->isInitialised){
			remove("C://Users//xiang//Documents//Visual Studio 2008//Projects//helloWorld//helloWorld//Output.txt"); 
			pEventMatrix->clearMatrix();

			// 4. put events from buffer into a 304*240 matrix
			pEventMatrix->buffer2matrix(*pEventBuffer);
			// 5. save matrix into another txt(as output)
			pEventMatrix->matrix2txt();
			// 6. update buffer(updateLength)
			pEventBuffer->update(updateLength);
		}
		else
			cout<< "Error: Buffer not initialised!" << endl;

	}

	delete pEventMatrix;
	return 1;
}
