//будем рассматривать функции ввода и вывода строк
#include <stdio.h>
#define SIZE 51

int main()
{
	char massiv[SIZE];
	printf("Введите строку:");
//	fscanf(stdin,"%[^\n]", massiv);
//	gets(massiv);
//	fprintf(stdout, "%s\n", massiv);
	fgets(massiv, 50, stdin);
	fputs(massiv, stdout);
	char symbol = 'A';
	for(; symbol <= 'Z'; symbol++)
		fprintf(stdout, "%c", symbol); 
	printf("\n");
	char symbol_d = 'D';
	symbol_d += 32;
	printf("%c\n", symbol_d);
}