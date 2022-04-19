//функции
#include <stdio.h>

void print_hello(); //прототип функции
int add_number(void);
char str(void);

int main()
{
	print_hello();
	int num = add_number();
	fprintf(stdout, "Return add_number = %d\n", num);
	str();
}

void print_hello()
{
	fprintf(stdout, "Hello function\n");
}

int add_number(void)
{
	int a = 10, b = 35;
	int c = a + b;
	return c;
}

char str()
{
	int a = 10, b = 55;
	fprintf(stdout, "Return str %d\n", a + b);
}