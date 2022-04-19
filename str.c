//будем работать со строками strstr(), strcmp()

#include <stdio.h>
#include <string.h>

int function();

int main()
{
	char str[] = "Время всегда хорошее!";
	char sub[] = "Время";
	if (strstr(str, sub) == NULL)
		{
			fprintf(stdout, "'%s' не найдено в строке '%s'\n", sub, str);
		}
	else
		{
			fprintf(stdout, "'%s' было найдено в строке '%s' по адрессу %p\n", sub, str, strstr(str, sub));
			fprintf(stdout, "'%s' находится в строке '%s' по индексу %ld\n", sub, str, strstr(str,sub)-str);
		}
	function();	
}

int function()
{
	char password[] = "pass";
	char ps[20];
	do 
	{
		fprintf(stdout, "Введите пароль:\n");
		scanf("%s", ps);
	}
	while(strcmp(password, ps) !=0);
	printf("Верный пароль\n");
	return 0;
}