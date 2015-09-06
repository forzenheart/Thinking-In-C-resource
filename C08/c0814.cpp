#include <iostream>

using namespace std;

void argument(float f)
{
	const float& ff = f;
	cout<<"const float &ff = "<<ff<<endl;
}

int main()
{
	float f1 = 2.2;
	argument(f1);
}
