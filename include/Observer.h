/**************************************************************************************\
									Observer.h
Author		:	ing.	R.J.H.M.	Stevens
Begin		:	02-06-2015
				
Version		:	1.0.0
TODO		:	
Description	:	The file contains the interfaces of all classes that have somthing to do
                     with the observer
Dependencies:	RSLogger
Changes		:
\**************************************************************************************/
#ifndef OBSERER_H_
#define OBSERVER_H_
#include <ctime>


/**
*
*/
enum DataType{
	CHAR,
	INT,
	FLOAT
};
/**
*
*/
class ObserverHeader{
public:
	char channelName[20];
	char sender[20];
	time_t created; //time(0);
	unsigned int dataSize;
	DataType type;
};
/**
 *
 */
class Observer{
public:
	/**
     *	@param
	 */
	virtual void onNotify(const ObserverHeader* header, const void* data) = 0;

	/**
	 *
	 */
	virtual ~Observer(){}
};
/**
 *
 */
class Subject{
protected:
	/**
     *	@param
	 */
	virtual void notify(const ObserverHeader& header, const void* data) = 0;

	/**
	 *
	 */
	virtual ~Subject(){}
};
/**
 *
 */
class Relay{
public: 
	/**
     *	@param
	 */
	virtual void registerSubject(Subject& subject, const char* channel) = 0;

	/**
     *	@param
	 */
	virtual void registerObserver(Observer& observer, const char* channel) = 0;

	/**
	 *
	 */
	virtual ~Relay(){}
};
#endif
