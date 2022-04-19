//рекурсия
#include <stdio.h>

void recur(int number); //прототип функции

int main()
{
    int number;
    fprintf(stdout, "Введите число для рекурсии:\n");
    fscanf(stdin, "%d", &number);  
    recur(number);
    puts("Рекурсия завершена!\n");
}

void recur(int number)
{
    fprintf(stdout, "%d\n", number);
    --number;
    if(number<0)
        return;
    else
        recur(number);          
}