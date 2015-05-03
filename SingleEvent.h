#pragma once
class SingleEvent
{
private:
	
public:
	int polarity, x_coordinate, y_coordinate, t_stamp;
	SingleEvent(int, int, int, int);
	~SingleEvent();
};

