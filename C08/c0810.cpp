#include <iostream>

using namespace std;

int main()
{
	char a[] = "this is a const char* const pointer";

	const char* const ptr = a;
	cout<<ptr<<endl;

	*ptr = 'a';
	ptr++;
	//c0810.cpp:12:7: error: assignment of read-only location ‘*(const char*)ptr’
	//	  *ptr = 'a';
	//       ^
	//c0810.cpp:13:5: error: increment of read-only variable ‘ptr’
	//    ptr++;

}
