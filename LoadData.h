#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include "SingleEvent.h"

using namespace std;
#define WIDTH 304
#define HEIGHT 240

class LoadData
{
public:
	void load(const char* );
	vector<SingleEvent> events;
};


