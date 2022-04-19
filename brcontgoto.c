#include <stdio.h>

int main()
{
	fprintf(stdout, "Используем в циклах break, continue и goto");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++ )
			fprintf(stdout, "Внешний цикл =%d\n, внутренний цикл = %d\n", i ,j);
		/*if(i==5)
			goto metka;
			//continue
			//break
		fprintf(stdout, "%d\n", i);*/
	}
	printf("Выполняюсь после for\n");
	metka:
	printf("метка сработала\n");
}