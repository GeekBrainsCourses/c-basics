//функции: определения и логика
#include <stdio.h>
void print_str()
{
    fprintf(stdout, "Вызывается функция print_str\n");
}
void print_str_arg(char str[])
{
    fprintf(stdout, "Выводится функция print_str_arg с аргументом: %s", str);
}
int summ(int num1, int num2)
{
    return num1 + num2;
}