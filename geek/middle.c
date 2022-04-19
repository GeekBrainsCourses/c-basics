#include <stdio.h>

int main(void)
{   
    int arr[10], sum, i;
    sum = 0;
    i = 0;
    while(i < 10)
    {
        printf("Введите %d-е число\n: ", i);
        scanf("%d", &arr[i]);
        sum += arr[i];
        i++;
    }
    printf("%d\n", sum);
    sum = sum / i;
    printf("Среднее аримфетическое введенных чисел равно: %d\n ", sum);
}