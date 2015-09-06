#include <iostream>

using namespace std;


const long* p1;
long const* p2;

int main()
{
	long a[] = {1,2,3,4,5};
	long b[] = {6,7,8,9,10}; 

	//c0808.cpp:17:6: error: assignment of read-only location ‘* p1’
	//	  *p1 = 100;
	//c0808.cpp:18:6: error: assignment of read-only location ‘* p2’
	//	   *p2 = 100;
	for(int i = 0; i < 5; i++)
	{
		cout<<*p1++<<endl;
		cout<<*p2++<<endl;
	}
}
