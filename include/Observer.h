#ifndef OBSERER_H_
#define OBSERVER_H_

/**
 *Author: ing. R.J.H.M. Stevens
 *
 */
class Observer{
public:
	virtual ~Observer();
	virtual void onNotify(const ObserverHeader* header, const void* data);
}

class Subject{
protected:
	void notify(const ObserverHeader& header, const void* data);
} 

class Relay(){
public: 
	void registerSubject(Subject& subject, char[] channel);
	void registerObserver(Observer& observer, char[] channel);
}

class ObserverHeader{
	char[] channelName;
	char[] sender;
	date created;
	unsigned int dataSize;
	ObserverDataType type;
}

enum DataType{
	CHAR,
	INT,
	FLOAT
};

#endif
