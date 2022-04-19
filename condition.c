#include <stdio.h>

int main()
{
	int num = 0;
	num = (6%2==0)?printf("Even\n"):printf("Not even\n");
	printf("%d\n", num);
}