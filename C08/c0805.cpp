#include <iostream>

using namespace std;

int j[10] = {0};

int main()
{
	j[0] = 1;

	for(int i = 0; i < 10; i++)
	{
		cout<<j[i];
	}
	cout<<endl;
	const char array[] = "this is  a test";
	cout<<array<<endl;
	//c0805.cpp:18:11: error: assignment of read-only location ‘array[0]’
	//  array[0] = 'a';

}
