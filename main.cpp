#include <iostream>
#include <string>
#include "tome.h"
#include <cstring>

using namespace std;

int main()
{
	string array[4]= {"phetheho","phatsoane","Thabiso","Tshediso"};
	
	tome A("lebohang",4,"Phatsoane");
	tome A1("lebohang",4,"Phatsoane",array);
	tome A2("lebohang",4,"Phatsoane",array);
	
	tome c = A1 + A2;
	
	tome E = A1;
	//cout << c;
	
	cout << A;
	
	
	return 0;
}