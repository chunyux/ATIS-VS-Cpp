//	@Created by Chunyu XIANG 03/2015

#include "stdafx.h"

EventMatrix::EventMatrix()
{
	for (int i = 0; i < HEIGHT; i++){
		for (int j = 0; j < WIDTH; j++){
			m[i][j] = 0;
		}
	}
}

void EventMatrix::buffer2matrix(AtisEventBuffer& eventBuffer)
{

	deque <SingleEvent>::iterator iterEvent;

	for (iterEvent = eventBuffer.readBuffer().begin(); iterEvent < eventBuffer.readBuffer().end(); iterEvent++){
		m[(*iterEvent).x_coordinate][(*iterEvent).y_coordinate] = (((*iterEvent).polarity==1)? 1:-1);
	}

}


EventMatrix::~EventMatrix()
{
}

void EventMatrix::matrix2txt()
{
	FILE *fptr;
	errno_t err;

	// Open for write 
	if ((err = fopen_s(&fptr, "C://Users//xiang//Documents//Visual Studio 2008//Projects//helloWorld//helloWorld//Output.txt", "a")) != 0)
		printf("The file 'data2' was not opened\n");
	else{
		printf("The file 'data2' was opened\n");
		for (int i = 0; i < HEIGHT; i++){
				for (int j = 0; j < WIDTH; j++){
					fprintf(fptr, "%d ", this->m[i][j]);
				}
				fprintf(fptr, "\n");
		}
	}
	// Close stream if it is not NULL 
	if (fptr)
	{
		if (fclose(fptr))
		{
			printf("The file was not closed\n");
		}
	}

	// All other files are closed:
	 _fcloseall();

}

void EventMatrix::clearMatrix()
{
	for (int i = 0; i < HEIGHT; i++){
		for (int j = 0; j < WIDTH; j++){
			m[i][j] = 0;
		}
	}
}

