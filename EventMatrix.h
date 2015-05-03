#pragma once
#include "LoadData.h"

class EventMatrix
{
private:
	int m[HEIGHT][WIDTH];
public:
	
	EventMatrix();
	EventMatrix(LoadData);

	void matrix2txt();
	~EventMatrix();

	
};

