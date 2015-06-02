#include "include\SimpleRelay.h"

SimpleRelay& SimpleRelay::getInstance(){
  // The only instance
  // Guaranteed to be lazy initialized
  // Guaranteed that it will be destroyed correctly
  static SimpleRelay instance;
  return instance;
}

void SimpleRelay::notify(const ObserverHeader& header, const void* data){
}
  
void SimpleRelay::registerSubject(Subject& subject, const char* channel){
}
  
void SimpleRelay::registerObserver(Observer& observer, const char* channel){
}

SimpleRelay::SimpleRelay(){
}