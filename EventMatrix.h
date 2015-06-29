//	@Created by Chunyu XIANG 03/2015	
#pragma once
#include "DataList.h"
#include "AtisEventBuffer.h"

class EventMatrix
{
private:
	int m[HEIGHT][WIDTH]; //Atis 304*240 matrix
public:
	
	EventMatrix();
	void buffer2matrix(AtisEventBuffer&); 
	void matrix2txt();
	void clearMatrix();
	~EventMatrix();

};





