#ifndef OBSERER_H_
#define OBSERVER_H_
#include <ctime>

/**
 *Author: ing. R.J.H.M. Stevens
 *
 */
enum DataType{
	CHAR,
	INT,
	FLOAT
};
class ObserverHeader{
	char channelName[20];
	char sender[20];
	time_t created; //time(0);
	unsigned int dataSize;
	DataType type;
};

class Observer{
public:
	virtual ~Observer();
	virtual void onNotify(const ObserverHeader* header, const void* data);
};

class Subject{
protected:
	void notify(const ObserverHeader& header, const void* data);
};

class Relay{
public: 
	void registerSubject(Subject& subject, const char* channel);
	void registerObserver(Observer& observer, const char* channel);
};
#endif
