#include "include\SimpleRelay.h"

SimpleRelay* SimpleRelay::getInstance()
{
  // The only instance
  // Guaranteed to be lazy initialized
  // Guaranteed that it will be destroyed correctly
  static SimpleRelay instance;
  return &instance;
}

void SimpleRelay::notify(const ObserverHeader& header, const void* data)
{
}

void SimpleRelay::registerSubject(Subject& subject, const char* channelName)
{
  for(int i = 0; i < mv_channelData.size(); i++)
    {
      if(strcmp(mv_channelData.at(i).channelName,channelName))
	{
	  mv_channelData.at(i).subjects.push_back(&subject);
	  return;
	}
    }
  
  ChannelData channel;
  strncpy ( (char*)channelName, channel.channelName, sizeof(channelName) );
  channel.subjects.push_back(&subject);
  mv_channelData.push_back(channel);
}

void SimpleRelay::registerObserver(Observer& observer, const char* channelName){
  for(int i = 0; i < mv_channelData.size(); i++)
    {
      if(strcmp(mv_channelData.at(i).channelName,channelName) == 0)
	{
	  mv_channelData.at(i).observers.push_back(&observer);
	  return;
	}
    }
  
  ChannelData channel;
  strncpy ( (char*)channelName, channel.channelName, sizeof(channelName) );
  channel.observers.push_back(&observer);
  mv_channelData.push_back(channel);
}

SimpleRelay::SimpleRelay(){
}
