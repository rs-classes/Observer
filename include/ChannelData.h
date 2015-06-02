/**************************************************************************************	\
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
#ifndef CHANNEL_DATA_H_
#define CHANNEL_DATA_H_

#include "Subject.h"
#include "Observer.h"
#include <vector>

class ChannelData{
	char channelName[254];
	 std::vector<Observer*> observers;
	 std::vector<Subject*> subjects;
};
#endif
