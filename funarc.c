//передаю аргументы в функции
#include <stdio.h>
#define SIZE 50

void string(char str[]);
int sum_number(int num1, int num2);
int cube(int x);

int main()
{
	int ITOGO, num1 = 50, num2 = 40;
	char str[SIZE] = "Я функция string\n";
	string(str);
	ITOGO = sum_number(num1, num2);
	fprintf(stdout, "func sum_number = %d\n", ITOGO);
	fprintf(stdout, "func cube = %d\n", cube(num1));
}

void string(char str[])
{
	fprintf(stdout, "func string: %s\n", str);
}

int sum_number(int num1, int num2)
{
	return num1 + num2;
}

int cube(int x)
{
	return x*x*x;
}