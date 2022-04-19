#include <stdio.h>
#include "f2.h"
#define SIZE 100

int main()
{
    int a, b = 120, c = 250;
    char str[SIZE] = "Изучаю программирование на языке СИ! \n";
    print_str();
    print_str_arg(str);
    a = summ(b, c);
    fprintf(stdout, "Вызывается функция summ = %d\n", a);
}
