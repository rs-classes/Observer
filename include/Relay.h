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
#ifndef RELAY_H_
#define RELAY_H_

#include "ObserverHeader.h"
#include "Subject.h"
#include "Observer.h"

/**
 *  This class sits between the subject and the observer, so there is no direct link between the observer and the subject
 */
class Relay{
 public:
  /**
   *  Send the message to the observers
   *  @param header the basic header
   *  @param data the data that has to be sended
   */
  virtual void notify(const ObserverHeader& header, const void* data) = 0;
  /**
   *  Register a new subject at the rely
   *
   *  @param subject the subject
   *  @param channel the channel on witch the subject wants to send
   */
  virtual void registerSubject(Subject& subject, const char* channel) = 0;
  
  /**
   *  Register a new observer at the relay
   *
   *  @param observer the observer
   *  @param channel the channel on witch the subject wants to send
   */
  virtual void registerObserver(Observer& observer, const char* channel) = 0;

  virtual ~Relay(){}
};

#endif
