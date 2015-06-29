//	DataList.h save the events in a list of events from txt
//				
//	@Created by Chunyu XIANG 03/2015		

#include <iostream>
#include <iomanip>
#include <fstream>
#include <list>
#include "SingleEvent.h"
#include <assert.h>

using namespace std;
#define WIDTH 304
#define HEIGHT 240
//#define SAMPLE_TIME 20

class DataList 
{
private:
	streampos sp_beg;
	const char* file_name;
//	int t0_stamp;
	
	SingleEvent anEvent;
	
public:
	list <SingleEvent> eventList;
	DataList(const char*);
	void load();
	
};


