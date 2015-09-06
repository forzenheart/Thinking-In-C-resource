int d = 1;
const int e = 2;
int* u = &d;
//c0811.cpp:4:11: error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
// int* v = &e;
int* w = (int*)&e;
int main() {}
