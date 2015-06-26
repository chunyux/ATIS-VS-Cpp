#include "stdafx.h"

DataList::DataList(const char* fileName):
file_name(fileName), t0_stamp(0),anEvent(-1,-1,-1,-1)
{
	ifstream dataFile(fileName);
	assert(dataFile);
	dataFile.seekg(0, ios::beg);
	
	sp_beg = dataFile.tellg();
	
}

void DataList::load(){
	
	int n_event = 0;

	ifstream dataFile(this->file_name);
	assert(dataFile);
	
	dataFile.seekg(sp_beg);	
	//while (!dataFile.eof()&&(t-this->t0_stamp)<SAMPLE_TIME){
	while (!dataFile.eof()){
		// save one event from txt to anEvent object
		dataFile >> dec >> this->anEvent.polarity;
		dataFile >> dec >> this->anEvent.x_coordinate;
		dataFile >> dec >> this->anEvent.y_coordinate;
		dataFile >> dec >> this->anEvent.t_stamp;
		
		this->eventList.insert(anEvent);
	}
	//this->t0_stamp = t;
	//pos_type = 1;
	//this->sp_beg = dataFile.tellg();
	dataFile.close();

};

