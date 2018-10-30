#ifndef MISSIVE_h
#define MISSIVE_h
#include "request.h"
using namespace std;


class missive
{
	private:
		request** list;
		string commanderName;
		string commanderID;
		int missiveLimit;
		int currentSize;
	
	public:
		missive();
		missive(string cName, string cID, int sizeMissive);
		missive(string cName, string cID, request** requests, int sizeMissive, int currSize);
		~missive();
		int addRequest(request* i);
		int removeRequest(string name);
		int getMostUrgentRequestPriority();
		request** getList();
		string getName();
		string getID();
		int getCurrSize();
		int getMissiveLimit();
		
};
#endif