#include <stdio.h>

int main(void)
{
    int integer;
    int a = 0, b = 100;
    printf("Введите целое число: ");
    scanf("%d", &integer);
    if ((integer >= a) && (integer <= b))
        printf("\nЧисло %d входит в диапозон от %d до %d\n", integer, a, b);
    else 
        printf("\nЧисло %d не входит в диапозон от %d до %d\n", integer, a, b);    
}