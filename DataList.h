#include <iostream>
#include <iomanip>
#include <fstream>
#include <list>
#include "SingleEvent.h"
#include <assert.h>

using namespace std;
#define WIDTH 304
#define HEIGHT 240
#define SAMPLE_TIME 20

class DataList //动词开头一般是function 此处应该是名词
{
public:
	streampos sp_beg;
	const char* file_name;
	int t0_stamp;
	
	SingleEvent anEvent;
	list <SingleEvent> eventList;
	
	void load();
	

	DataList(const char*);
};


