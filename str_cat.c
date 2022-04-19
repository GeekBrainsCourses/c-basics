//будем изучать функции strcat strncat
#include <stdio.h>
#include <string.h>
#define SIZE 500

int main()
{
	char str1[SIZE] = "Я заучаю программирование";
	char str2[] = " на языке Си!\n";
	char str3[SIZE] = "Все подписчики канала станут";
	char str4[] = " профессиональными программистами!\n";
	char str5 [SIZE] = "Мы работам на";
	char str6[] = " операционках Linux\n";
	strcat(str1, str2);
	fputs(str1, stdout);
	strncat(str3, str4, 68);
	fprintf(stdout, "%s\n", str3);
	strncat(str5, (str6+25), 7);
	fprintf(stdout, "%s\n", str5);
} 