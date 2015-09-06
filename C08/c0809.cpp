#include <iostream>

using namespace std;

int main()
{
	double d = 1.0f;
	double* const cdptr = &d;
	cout<<"d  = "<<*cdptr<<" cdptr = "<<(long)cdptr<<endl;

	*cdptr = 2.0f;

	double dother = 2.0f;
	//cdptr = &dother;
	//c0809.cpp:14:8: error: assignment of read-only variable ‘cdptr’
	//	  cdptr = &dother;

	cout<<"d  = "<<*cdptr<<" cdptr = "<<(long)cdptr<<endl;


}
