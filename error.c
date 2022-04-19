//будем работать с сообщениями об ошибках функции perror(), strerror();
#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    /*FILE *f_ptr;
    f_ptr = fopen("filenotfoun.txt","r");
    if(f_ptr != NULL)
    {
        fprintf(stdout, "Файл успешно прочитан!");
    }
    else
        perror("ОШИБКА");*/
    for(int i; i<135; i++)
    fprintf(stdout, "Ошибка №%d: %s\n", i,strerror(i));
}