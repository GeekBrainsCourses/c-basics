#include <stdio.h>
#include <string.h>

int main()
{
	printf("Выведем числа от 1 до 10\n");
	for(int i=1; i<=10; i++)
		{
			printf("%d\n", i);
		}
	printf("\n");
	int number[]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0; i<=9; i++)
		{
			printf("number[%d]=%d\n", i, number[i]);
		}
	printf("\n");
	char symbols[5]={'V','O','V','A','\0'};
	for(int j=0; j<strlen(symbols); j++)
		{
			printf("%c", symbols[j]);
		}
	printf("\n");
	char str[] = {"My string"};
	for (int j = 0; j<strlen(str); j++)
		{
			printf("%c", str[j]);
		}
	printf("\n");
}