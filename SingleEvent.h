//	@Created by Chunyu XIANG 03/2015	
#pragma once
class SingleEvent
{
private:
	
public:
	short polarity, x_coordinate, y_coordinate;
	int t_stamp;
	SingleEvent(short, short, short, int); 
	// copy constructer
	~SingleEvent();
};




