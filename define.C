#include <stdio.h>
#define SUM(a,b) (a + b) * 2

int main()
{
	int a, b, c, d;
	a = 3;
	b = 5;
	c = (a + b) * 2;
	d = SUM(a, b);
	printf("a = %d, b = %d\n", a, b);
	printf("c = %d, d = %d\n", c, d);
}