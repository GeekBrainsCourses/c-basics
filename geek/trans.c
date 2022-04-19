#include <stdio.h>
#include <string.h>
#include <malloc.h>

char * translator(int numf)
{
    char *t = (char *)malloc(100);
    int i = 0;
    do
    {
        t[i++] = numf % 2 + '0';
        printf("%d ", numf);
        printf(" %c\n", *t);
        numf = numf / 2;
    }while (numf != 0);
    t[i] = '\0';
    int k = strlen(t) - 2;
    int m = k / 2;
    for (int i = 0; i <= m; i++)
    {
        char tmp = t[i];
        t[i] = t[k - i + 1];
        t[k - i + 1] = tmp;
    }
    return t;
}

int main(void)
{
    float num;
    int numi;
    printf("Эта программа переводит десятичные числа в двоичные.\n");
    do
    {
    printf("Введите целое число: ");
    scanf("%f", &num);
    }while((num != (int)num)) ;
    numi = (int)num;
    printf("Вы ввели число %d\n", numi);
    char *t = translator(numi);
    printf("Его двоичное представление: %s\n", t);
}