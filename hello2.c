//сравнение с файлом hello2.c
#include <stdio.h>
#define SIZE 20 
int main()
{
    char str[SIZE];    
    fprintf(stdout, "Пожалуйста введите ваше имя: ");
    fscanf(stdin, "%10s", str);
    fprintf(stdout, "Здравствуйте, ваше имя: %s\n",str);
}