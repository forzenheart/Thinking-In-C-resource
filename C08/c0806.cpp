#include <iostream>
using namespace std;

const char a[] = "this is a test!!";

int main()
{
	cout<<a<<endl;
	//	c0806.cpp:11:7: error: assignment of read-only location ‘a[0]’
	//		  a[0] = 'a';

}
