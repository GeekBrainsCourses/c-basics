#include <stdio.h>

int main()
{
    char array[7] = {'S','T','R','I','N','G','\0'};
    char string[] = ("Stroka");
    int number[4];
    number[0] = 10;
    number[1] = 50;
    number[2] = 100;
    number[3] = 250;
    int mumber[4] = {10,50,100,250};
    for(int i=0; i<7; i++)
    {
        printf("%c\n", string[i]);
    }
   for(int j=0; j<7; j++)
        printf("%c\n", string[j]);
    printf("first element = %d\n", number[0]);
    printf("second element = %d\n", number[1]);
    printf("third element = %d\n", number[2]);
    printf("fourth element = %d\n", number[3]);
}
