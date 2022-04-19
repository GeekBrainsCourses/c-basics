//switch() . . case :;
#include <stdio.h>

int main()
{
	fprintf(stdout, "Выберите фильм и узнайте его описание:\n");
	fprintf(stdout, "1. Терминатор\n");
	fprintf(stdout, "2. Матрица\n");
	fprintf(stdout, "3. Star Wars\n");
	fprintf(stdout, "4. Дневник Анны Франк\n");
	int number = 0;
	fscanf(stdin, "%d", &number);
	switch(number)
		{
			case 1: fprintf(stdout, "Люди в будущем воют с машинами\n");
			break;
			case 2: fprintf(stdout, "Люди в будущем воют с машинами:)))))))))))\n");
			break;
			case 3: fprintf(stdout, "Люди в будущем воют с машинами (иногда)\n");
			break;
			case 4: fprintf(stdout, "Люди в будущем воют с...\n");
			default: fprintf(stdout, "Такого фильма нет\n");
		}
	fprintf(stdout, "Спасибо, заходите еще\n");		
}