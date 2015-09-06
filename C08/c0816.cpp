void t(int*) {}

void u(const int* cip) {
	// assignment of read-only location ‘* cip’
	//*cip = 2;
	int i = *cip;
	// invalid conversion from ‘const int*’ to ‘int*’
	// int* ip2 = cip;
}


const char* v() {
	return "result of function v()";
}

const int* const w() {
	static int i;
	return &i;
}

int main()
{
	int x = 0;
	int* ip = &x;
	const int* cip = &x;
	t(ip);
	// invalid conversion from ‘const int*’ to ‘int*’ 
	// t(cip);
	u(ip);
	u(cip);
	// invalid conversion from ‘const char*’ to ‘char*’ 
	// char* cp = v();
	const char* ccp = v();
	//invalid conversion from ‘const int*’ to ‘int*’
	//int* ip2 = w();
	const int* const ccip = w();
	const int* cip2 = w();
	//assignment of read-only location ‘* w()’
	//*w() = 1;
}
