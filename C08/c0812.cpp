#include <iostream>

using namespace std;

char cp[] = "good day!";
const char *tp = "heelow";
int main() 
{
	cout<<cp<<endl;
	cp[0] = 'a';
	cout<<cp[0]<<endl;
	cout<<cp<<endl;
}


