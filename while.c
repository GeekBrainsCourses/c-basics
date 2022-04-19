//while (), do while
#include <stdio.h>

int main()
{
	fprintf(stdout, "Выведем числа от 0 до 10\n");
	int number = 0;
	while(number <= 10)
		{	
			printf("%d\n", number);
			number++;
		}
}