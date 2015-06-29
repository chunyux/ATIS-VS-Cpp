//	@Created by Chunyu XIANG 03/2015	
#pragma once
#include <deque>

class AtisEventBuffer
{
private:
	unsigned short bufferLength;
	deque <SingleEvent> eventBuffer; 
	list <SingleEvent>::iterator iterPos; // iterator saving the update ending postion of events list
	

public:
	AtisEventBuffer(unsigned short bufferlen);
	unsigned short getBufferLength();
	void init(list <SingleEvent> &);
	void update(unsigned short);
	bool isInitialised;
	deque <SingleEvent> & readBuffer();

};
