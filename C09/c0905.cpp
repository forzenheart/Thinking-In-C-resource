#include <cstdio>
#include <ctime>

inline int f1(int a, int b)
{
	a++;
	a += b;
	b += a;
	return a + b;
}

int f2(int a, int b)
{
	a++;
	a += b;
	b += a;
	return a + b;
}

int main(void)
{
	clock_t	t1, t2;
	printf("Calculating time...\n");

	t1 = clock();
	for (int i = 0; i < 10000000; i++)
		f1(100, 100);
	t1 = clock() - t1;
	printf("f1 take %ld clicks(%f seconds)\n", t1, ((float)t1)/CLOCKS_PER_SEC);

	t2 = clock();
	for (int i = 0; i < 10000000; i++)
		f2(100, 100);
	t2 = clock() - t2;
	printf("f2 take %ld clicks(%f seconds)\n", t2, ((float)t2)/CLOCKS_PER_SEC);
	return 0;
}
