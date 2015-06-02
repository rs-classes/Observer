#ifndef SIMPLE_RELAY_H_
#define SIMPLE_RELAY_H_
#include "Observer.h"

class SimpleRelay: public Relay{
 public:

  static SimpleRelay& getInstance();
  //http://stackoverflow.com/questions/86582/singleton-how-should-it-be-used
  
  /**
   *  Send the message to the observers
   *  @param header the basic header
   *  @param data the data that has to be sended
   */
  virtual void notify(const ObserverHeader& header, const void* data);
  
  /**
   *  Register a new subject at the rely
   *
   *  @param subject the subject
   *  @param channel the channel on witch the subject wants to send
   */
  virtual void registerSubject(Subject& subject, const char* channel);
  
  /**
   *  Register a new observer at the relay
   *
   *  @param observer the observer
   *  @param channel the channel on witch the subject wants to send
   */
  virtual void registerObserver(Observer& observer, const char* channel);

private:
  SimpleRelay();
  // Stop the compiler generating methods of copy the object
  RSLogger(RSLogger const& copy);            // Not Implemented
  RSLogger& operator=(RSLogger const& copy); // Not Implemented
};
#endif