#include <stdio.h>

class a {
	int x;
	public:
	a(int xx);
	void print();
};

a::a(int xx)
	:x(xx)
{}

void
a::print()
{
	printf("%d\n", x);
}

int
main(void)
{
	a	a1(2);
	a	*a2 = &a1;
	a1.print();
	a2->print();
	return 0;
}
