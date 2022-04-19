// Будем работать с файлами с помощью fread, fwrite
#include <stdio.h>
#define LEN 1001

int main()
{
    int num;
    char massiv[LEN];
    FILE *ishodnik_ptr;
    FILE *copy_ptr;
    //fread(massiv, 1, LEN, ishodnik_ptr) возвращает количество символов которое она смогла прочитать.
    //fwrite(massiv, 1, LEN, copy_ptr);
    ishodnik_ptr = fopen("ishodnik.txt", "r");
    copy_ptr = fopen("copy.txt", "w");
    if((ishodnik_ptr != NULL) && (copy_ptr != NULL))
    {
        num = fread(massiv, 1, LEN, ishodnik_ptr);
        fwrite(massiv, 1, num, copy_ptr);
        fprintf(stdout, "Прочитан исходный файл и создана копия, было прочитано %d символа \n", num); 
    }
    else
    if (ishodnik_ptr == NULL)
        fprintf(stdout, "Не удалось прочитать файл\n");
    else
    if (copy_ptr == NULL)
        fprintf(stdout, "Не удалось скопировать файл\n");
}