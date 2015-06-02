#ifndef SIMPLE_RELAY_H_
#define SIMPLE_RELAY_H_
#include "Observer.h"

class SimpleRelay: public Relay{
 public:
  SimpleRelay();

  /**
   *  Recives the notifications from the subjet
   *
   *  @param header The header with the basic info
   *  @param data the real data
   */
  virtual void onNotify(const ObserverHeader* header, const void* data);

private:

};
#endif