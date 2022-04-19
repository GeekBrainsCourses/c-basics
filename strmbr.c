//объявление указателя в структуре
#include <stdio.h>

typedef struct
{
    char str[5];
} ArrType;

typedef struct
{
    char *str;
} PtrType;

ArrType arr = {'B','A','D','!','\0'};
PtrType ptr = {"GOOD"};

int main()
{
/*  printf("Массив символов: %s\n", arr.str);
    // arr.str = "idea"; так нельзя
  arr.str[0] = 'I';
    arr.str[1] = 'd';
    arr.str[2] = 'e';
    arr.str[3] = 'a';
    arr.str[4] = '\0';*/
/*  char *pointer = "Idea";
    for (int i = 0; i<5; i++)
        arr.str[i] = *pointer++;
    printf("%s\n", arr.str);*/
    printf("Cтроковый указатель %s\n", ptr.str);      
    ptr.str = "idea";
    printf("%s\n", ptr.str);      
}