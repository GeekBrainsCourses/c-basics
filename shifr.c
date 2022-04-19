//будем шифровать строку и расшифровывать ее;
#include <stdio.h>
#define SIZE_STR 100

void string(char *p_string);

int main()
{
    char str[SIZE_STR];
    char *p_string = str;
    printf("Введите строку для шифрования: \n");
    fgets(str, SIZE_STR, stdin);
    string(str);
    printf("Зашифрованная строка: %s\n", str);    
    string(p_string);
    printf("Расшифрованная строка: %s\n", str);
}

void string(char *p_string)
{
    while(*p_string)
    {
        *p_string = *p_string ^ 31;
        *p_string++; 
    }
}