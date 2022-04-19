//Преобразование строк
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int num1, num2, num3;
    char s1[10] = "75Numbers", s2[20] = "23My number 36", s3[10] = "125";
    char s4[10], s5[10], s6[10], s7[10];
    num1 = atoi(s1);
    printf("В строке %s было выделено число %d\n", s1, num1);
    num2 = atoi(s2);
    printf("В строке %s было выделено число %d\n", s2, num2);  
    num3 = atoi(s3);
    printf("В строке %s было выделено число %d\n", s3, num3);     
    //spintf()
    sprintf(s4, "%o", num1);
    printf("Число %d было преобразовано в строку %s\n", num1, s4);
    sprintf(s5, "%x", num3);
    printf("Число %d было преобразовано в строку %s\n", num3, s5);
    sprintf(s6, "%d", num2);
    printf("Число %d было преобразовано в строку %s\n", num2, s6);
    // itoa()
    //itoa(num1, s7, 10);
    //printf("Число %d было преобразовано в строку %s\n",num1, s7);
}