#include <stdio.h>

int main ()
{
	int age, weight;
	char name[50]; //массив символов
	printf("Пожалуйста введите ваше имя: ");
	scanf("%s", name);
	printf("Пожалуйста введите ваш возраст: ");
	scanf("%d", &age);	
	printf("Пожалуйста введите ваше вес: ");
	scanf("%d", &weight);
	printf("Выведем нашу информацию: \n");
	printf("Ваше имя %s, Ваш возраст %d лет, ваш вес %d кг,\n", name, age, weight);
	printf("Адресс массива name с нашим именем в памяти компьютера - %p\n", &name);
}