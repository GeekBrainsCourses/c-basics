#include <stdio.h>

int main()
{
	int num, a = 10, b = 4, cat = 1;
	num = (a > b) ? a:b;
	printf("%d\n", num);
	printf("I have %d %s\n", cat, (cat==1)?"cat":"cats");
}