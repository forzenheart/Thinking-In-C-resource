#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t t;
	time(&t);
	const time_t t1 = t;
	cout<<ctime(&t)<<endl;
}
