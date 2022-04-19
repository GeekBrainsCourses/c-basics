//while (), do while
#include <stdio.h>

int main()
{
	fprintf(stdout, "Повтор фрагмента\n");
	char symbol = 'y';
	/*
	while(symbol == 'y')
	{	
		printf("Я хочу повторять\n");
		printf("Повторить (y/n)?\n");
		scanf("%s", symbol);
	}
	printf("Что надоело?))))\n");*/
	//do while
	do
	{
		printf("Я хочу повторять\n");
		printf("Повторить (y/n)?\n");
		scanf("%s", &symbol);
	} while (symbol == 'y');
	printf("Что надоело?))))\n");
}