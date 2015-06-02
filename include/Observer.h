/******************************************************************************\
                                        Observer.h
Author		:	ing.	R.J.H.M.	Stevens
Begin		:	02-06-2015
			
Version		:	1.0.0
TODO		:	
Description	:	The file contains the interfaces of all classes that have somthing to do
                     with the observer
Dependencies    :	RSLogger
Changes		:
\******************************************************************************/
#ifndef OBSERVER_H_
#define OBSERVER_H_

#include "ObserverHeader.h"

/**
 *  The observer recives the messages from the subject
 */
class Observer{
 public:
  /**
   *  Recives the notifications from the subjet
   *
   *  @param header The header with the basic info
   *  @param data the real data
   */
  virtual void onNotify(const ObserverHeader* header, const void* data) = 0;
  
  virtual ~Observer(){}
};

#endif
