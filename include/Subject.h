/******************************************************************************\
                                        Observer.h
Author		:	ing.	R.J.H.M.	Stevens
Begin		:	02-06-2015
			
Version		:	1.0.0
TODO		:	
Description	:	The file contains the interfaces of all classes that have somthing to do
                     with the observer
Dependencies:	RSLogger
Changes		:
\******************************************************************************/
#ifndef SUBJECT_H_
#define SUBJECT_H_

#include "ObserverHeader.h"
/**
 *  This class creates the messages
 */
class Subject{
 protected:
  /**
   *  Send the message to the observers
   *  @param header the basic header
   *  @param data the data that has to be sended
   */
  virtual void notify(const ObserverHeader& header, const void* data) = 0;
  
  virtual ~Subject(){}
 
};

#endif
