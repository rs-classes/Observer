#include "include\SimpleRelay.h"

SimpleRelay& SimpleRelay::getInstance(){
}

void SimpleRelay::notify(const ObserverHeader& header, const void* data){
}
  
void SimpleRelay::registerSubject(Subject& subject, const char* channel){
}
  
void SimpleRelay::registerObserver(Observer& observer, const char* channel){
}

SimpleRelay::SimpleRelay(){
}