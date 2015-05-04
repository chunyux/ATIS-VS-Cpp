#include "LoadData.h"

LoadData::LoadData(const char* fileName):
file_name(fileName), t0_stamp(0)
{
	ifstream dataFile(fileName);
	assert(dataFile);
	dataFile.seekg(0, ios::beg);
	sp_beg = dataFile.tellg();

}

void LoadData::load(streampos sp){
	
	int p, x, y, t = this->t0_stamp;

	ifstream dataFile(this->file_name);
	assert(dataFile);
	
	dataFile.seekg(sp);
	while (!dataFile.eof()&&(t-this->t0_stamp)<SAMPLE_TIME){
		
		dataFile >> dec >> p;
		dataFile >> dec >> x;
		dataFile >> dec >> y;
		dataFile >> dec >> t;
		SingleEvent event(p,x,y,t);
		this->events.push_back(event);
	}
	this->t0_stamp = t;
	this->sp_beg = dataFile.tellg();
	dataFile.close();

};

