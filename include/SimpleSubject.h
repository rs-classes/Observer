#ifndef SIMPLE_SUBJECT
#define SIMPLE_RELAY_H_
#include "Subject.h"

class SimpleSubject: public Subject{
 public:
  SimpleSubject();
  virtual void notify(const ObserverHeader& header, const void* data);
};
#endif