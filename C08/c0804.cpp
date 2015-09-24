#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t t;
	time(&t);
	const time_t t1 = t;
	cout<<ctime(&t)<<endl;
	time(&t);
	cout<<ctime(&t)<<endl;
	//t1 = t;
	//c0804.cpp:14:5: error: assignment of read-only variable ‘t1’

}
