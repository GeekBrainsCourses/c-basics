#include <stdio.h>

int main(void)
{
    int n, spaces, symb;
    printf("Это программа рисует равнобедренный треугольник на заданном числе строк.");
    printf("Введите количество строк: \n");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {   
        spaces = ((n - i) + 1);
        symb = i + (i - 1);
        for(int j = 1; j <= spaces; j++)
            printf(" ");
        for (int j = 1; j <= symb; j++)
            printf("^");
        printf("\n");        
    }
}