#pragma once
#include "DataList.h"

class EventMatrix
{
private:
	int m[HEIGHT][WIDTH];
public:
	
	EventMatrix();
	EventMatrix(SingleEvent*);

	void matrix2txt();
	~EventMatrix();

};



