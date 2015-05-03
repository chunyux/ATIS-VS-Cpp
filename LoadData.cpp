#include "LoadData.h"

void LoadData::load(const char* fileName){
	ifstream dataFile(fileName);
	int p, x, y, t;
	
	if (!dataFile){
		cout << "Unable to open " << endl;
		exit(1);
	}
	
	
	while (!dataFile.eof()){
		
		dataFile >> dec >> p;
		dataFile >> dec >> x;
		dataFile >> dec >> y;
		dataFile >> dec >> t;
		SingleEvent event(p,x,y,t);
		this->events.push_back(event);
	}

	dataFile.close();

};

