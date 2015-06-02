/******************************************************************************\
                                        ObserverHeader.h
Author		:	ing.	R.J.H.M.	Stevens
Begin		:	02-06-2015
			
Version		:	1.0.0
TODO		:	
Description	:	The file contains the interfaces of all classes that have somthing to do
                     with the observer
Dependencies    :	
Changes		:
\******************************************************************************/
#ifndef OBSERVER_HEADER_H_
#define OBSERVER_HEADER_H_
#include <ctime>

class ObserverHeader{
 public:
  char channelName[254];
  char sender[254];
  time_t created; //time(0);
  unsigned int dataSize;
  char dataType[20];
};

#endif
