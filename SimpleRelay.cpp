#include "include\SimpleRelay.h"

SimpleRelay& SimpleRelay::getInstance()
{
  // The only instance
  // Guaranteed to be lazy initialized
  // Guaranteed that it will be destroyed correctly
  static SimpleRelay instance;
  return instance;
}

void SimpleRelay::notify(const ObserverHeader& header, const void* data)
{
}

void SimpleRelay::registerSubject(Subject& subject, const char* channel)
{
  for(int i = 0; i < channelData.size(); i++)
    {
      if(channelData.at(i).channelName == *channel)
	{
	  channelData.at(i).subjects.add(subject);
	  return;
	}
    }
  
  ChannelData channel;
  channel.channelName = *channel;
  channel.subjects.add(subject);
  channelData.add(channel);
}

void SimpleRelay::registerObserver(Observer& observer, const char* channel){
  for(int i = 0; i < channelData.size(); i++)
    {
      if(channelData.at(i).channelName == *channel)
	{
	  channelData.at(i).observer.add(observer);
	  return;
	}
    }
  
  ChannelData channel;
  channel.channelName = *channel;
  channel.observer.add(observer);
  channelData.add(channel);
}

SimpleRelay::SimpleRelay(){
}
