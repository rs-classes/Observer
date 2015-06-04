#include "SimpleSubject.h"
#include "include\SimpleRelay.h"

SimpleSubject::SimpleSubject(const char* name, const char* channelName){
  strncpy ( (char*)channelName, m_channelName, sizeof(channelName) );
  strncpy ( (char*)name, m_name, sizeof(name) );

  mp_relay = SimpleRelay.getInstance();

  mp_relay.registerSubject(this, channelName);
  
}

virtual void SimpleSubject::notify(const ObserverHeader& header, const void* data){
  mp_relay.notify(header, data);
}
