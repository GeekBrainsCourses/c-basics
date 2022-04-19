#include <stdio.h>
#define NUMBER 1000
#define AUTHOR "Vova"
#define LINE "_________________"
#define SYMBOL "!@#$^&*()"
#define TITLE "C programming is easy"

int main()
{
	const int STO = 100;
	const char STROKA[] = "strokovaya konstanta";
	printf("const STO %d\n", STO);
	printf("%s\n", STROKA);
	printf("const NUMBER = %d\n", NUMBER);
	printf("const LINE = %s\n", LINE);
	printf("const SYMBOL = %s\n", SYMBOL);
	printf("const TITLE = %s\n", TITLE);
	printf("const AUTHOR = %s\n", AUTHOR);
}