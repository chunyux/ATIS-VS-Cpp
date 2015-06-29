//	@Created by Chunyu XIANG 03/2015	

#include "stdafx.h"

DataList::DataList(const char* fileName):
file_name(fileName), anEvent(-1,-1,-1,-1)
{
	ifstream dataFile(fileName);
	assert(dataFile);
	dataFile.seekg(0, ios::beg); // find the beginning of txt file
	
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
		
		this->eventList.push_back(anEvent);
	}

	dataFile.close();

};



