#include <stdio.h>

static int number = 500; // Глобальная локальная переменная

int main(void)
{
	extern int number; // используем глобальную статическую переменную
	printf("number = %d\n", number);
	extern int number2; // будет находится в другом файле
	printf("number2 = %d\n", number2);
}