#include <stdio.h>

int main()
{
	int number;
	printf("Please enter integer number in range [0,20]\n");
	scanf("%d", &number);
	if ((number>0) && (number<10))
		printf("number range [0,10]\n");
	else if ((number>10) && (number<20))
		printf("number range [11,20]\n");
	else 
		printf("Incorrect input. Greater then 20\n");
}