#pragma once
class SingleEvent
{
private:
	
public:
	short polarity, x_coordinate, y_coordinate;
	int t_stamp;
	SingleEvent(short, short, short, int); // int to short ?? for p, x,y
	// copy constructer
	~SingleEvent();
};


