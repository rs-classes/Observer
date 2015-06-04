/***************************************************************************** \
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
#ifndef SIMPLE_SUBJECT_H_
#define SIMPLE_SUBJECT_H_
#include "Subject.h"
#include "SimpleRelay.cpp"

class SimpleSubject: public Subject{
 public:
  SimpleSubject();
  virtual void notify(const ObserverHeader& header, const void* data);
 private:
  char m_channelName[254];
  char m_name[254];
  SimpleRelay* mp_relay;
};
#endif
