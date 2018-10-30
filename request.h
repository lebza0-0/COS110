#ifndef REQUEST_h
#define REQUEST_h
#include"missive.h"

using namespace std;

class request
{
	private:
		string requesterName;
		string requestType;
		int urgency;

	public:
		request();
		request(string name,string ID, int type, int urg);
		~request();
		string getRequesterName();
		string getID();
		string getRequestType();
		int getUrgency();
		void print();
};
#endif