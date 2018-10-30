#include <iostream>
#include <string>
#include "request.h"
#include "missive.h"

using namespace std;

request::request()
{
	cout<<"request class constructed"<<endl;
}
request::request(string name,string ID, string type, int urg)
{
	requesterName = name;
	requestType = type;
	urgency = urg;
	requestID = ID;
}
request::~request()
{
	cout<<"request deleted"<<endl;
}
string request::getRequesterName()
{
	return requesterName;
}
string request::getID()
{
	return requestID;
}
string request::getRequestType()
{
	return requestType;
}
int request::getUrgency()
{
	return urgency;
}
void request::print()
{
	cout<<"Name: "<<getRequesterName()<<endl;
	cout<<"Type: "<<getRequestType()<<endl;
	cout<<"Urgency: "<<getUrgency()<<endl;
}