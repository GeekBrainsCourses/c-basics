//Будем работать с указателями в качестве аргументов и параметров в функциях
#include <stdio.h>

void func1(int *p_number);
void func2(int *p_number);

int main()
{
    int number = 100;
    int *p_number = &number;
    fprintf(stdout, "Number = %d ", number);
    fprintf(stdout, "*p_=number = %d, adress p_number = %p\n", *p_number, p_number);
    func1(p_number);
    fprintf(stdout, "Number %d\n", number);
    fprintf(stdout, "p_umber %d\n", *p_number);
    func2(p_number);
    fprintf(stdout, "Number %d\n", number);
    fprintf(stdout, "p_umber %d\n", *p_number);
}

void func1(int *p_number)
{
    *p_number = *p_number + *p_number;
}

void func2(int *p_number)
{
    *p_number = *p_number / *p_number;
}