#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include "SingleEvent.h"
#include <assert.h>

using namespace std;
#define WIDTH 304
#define HEIGHT 240
#define SAMPLE_TIME 20

class LoadData
{
public:
	streampos sp_beg;
	const char* file_name;
	int t0_stamp;

	vector<SingleEvent> events;
	
	void load(streampos);
	

	LoadData(const char*);
};


