#include <iostream>
#include <string>
#include "missive.h"
#include "request.h"

using namespace std;

missive::missive()
{
	cout<<"missive class constructed"<<endl;
	list = NULL;
}
missive::missive(string cName, string cID, int sizeMissive)
{
	currentSize = 0;
	commanderName = cName;
	commanderID = cID;
	missiveLimit = sizeMissive;
	
	list = new request*[missiveLimit];

	for(int index=0; index < missiveLimit;index++)
	{
		list[index]=NULL;
	}

}
missive::missive(string cName, string cID,request**requests, int sizeMissive, int currSize)
{
	commanderName = cName;
	commanderID = cID;
	missiveLimit = sizeMissive;
	currentSize = currSize;
	
	list = new request*[missiveLimit];
	
	for (int i = 0; i < currentSize; i++)
	{
		
		list[i] = new request[i];
	}
	
}
missive::~missive()
{

	if(list != NULL)
	{
		for(int i = 0; i < currentSize; i++)
		{
			if(list[i] != NULL)
			delete list[i];
	
		}
		delete [] list;
		list=NULL;
	}
	
}
int missive::addRequest(request* i)
{
	if(missiveLimit!=currentSize)
	{
		
		request *deeplist=new request*(i->getRequesterName(),i->getID,i->getRequestType(),i->getUrgency());
		list[currentSize]=deeplist;
		currentSize++;
		return (currentSize-1);
	}
	else
	{
		return -1;	
	}

}
int missive::removeRequest(string name)
{
	
		for (int i = 0;i <currentSize;i++)
		{
			if(list[i] == name.getID())
			{
				delete list[i];
			}
				
			else 
				return -1;
		}
	
}
int missive::getMostUrgentRequestPriority()
{
	if ()
	{
		return;
	}
	else 
		return -1;

}
request** missive::getList()
{
	return list;
}
string missive::getName()
{
	return commanderName;
}
string missive::getID()
{
	return commanderID;
}
int missive::getCurrSize()
{
	return currentSize;
}
int missive::getMissiveLimit()
{
	return missiveLimit;
}



