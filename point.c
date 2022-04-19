#include <stdio.h>
#include <string.h>
#define SIZE 10

int main()
{
    int number = 15;
  /*int *P_number = &number;*/
    int *P_number; // объявлен указатель (int* P_choto или int *P_chtoto)
    P_number = &number; // хранит адрес переменной number
    printf("Значение - %d, адресс - %p\n", *P_number, P_number);
    int *p_mass_number;
    int massiv[] = {1,2,3,4,5,6,7,8,9,10};
    p_mass_number = massiv;
    for(int i = 0; i < SIZE; i++)
    {
        fprintf(stdout, "Index[%d], value[%d], point[%p]\n", i, *p_mass_number, p_mass_number);
        *p_mass_number++;
    }
    char *p_mass_char;
    char string[] = "Fallingsappy";
    p_mass_char = string;
    for(int i = 0; i < strlen(string); i++)
    {
        if(*p_mass_char == 'a')
            *p_mass_char = 'i';
      //fprintf(stdout, "Stroka: %c\n",*p_mass_char);
        fprintf(stdout, "%c",*p_mass_char);
        *p_mass_char++;
    }
    printf("\n");
}