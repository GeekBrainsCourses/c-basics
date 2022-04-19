//Работа с файлами с помощью FILE и функции fopen, fclose;
#include <stdio.h>
#define LEN 100

int main()
{
    char str[LEN];
    char name[LEN] = "by Fallingsappy";
    FILE *file_ptr;
    file_ptr = fopen("new_file.txt", "r+a");
    //r, w, a, r+, w+, rb, wb
    if (file_ptr != NULL)
    {
        printf("Файл успешно создан!\n");
        printf("Считывам данные из файла...\n\n");
        fgets(str, LEN, file_ptr); // получил данные из файла
        fprintf(stdout,"%s\n",str); 
        printf("Cчитывание завершено! \n");
        fputs(name, file_ptr);
    }
    else
    {
        fprintf(stdout, "Не удалось создать файл\n");
        return 1;
    }
}