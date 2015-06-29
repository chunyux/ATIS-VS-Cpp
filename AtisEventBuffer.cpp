//	@Created by Chunyu XIANG 03/2015	

#include "stdafx.h"

AtisEventBuffer::AtisEventBuffer(unsigned short bufferlen):
bufferLength(bufferlen),isInitialised(false)
{
}


unsigned short int AtisEventBuffer::getBufferLength()
{
	return bufferLength;
};

void AtisEventBuffer::init(list<SingleEvent> & eventList)
{
	this->iterPos = eventList.begin(); //iterator points at the beginning of event list
	
	for(int ibufferLength = 0; ibufferLength < this->bufferLength; ibufferLength ++){
			eventBuffer.push_back(*(this->iterPos)); //push_back events from the beginning of list
			iterPos++;
	}
	this->isInitialised = true;
};

void AtisEventBuffer::update(unsigned short updateLength)
{
	for(int iupdateLength = 0; iupdateLength < updateLength; iupdateLength++){
			eventBuffer.pop_front();
	}
	for(int iupdateLength = 0; iupdateLength < updateLength; iupdateLength++){
			eventBuffer.push_back(*(this->iterPos)); //push back events from iterator's current position
			iterPos++;
	}
};

deque <SingleEvent>& AtisEventBuffer::readBuffer(){
	return eventBuffer;
};
