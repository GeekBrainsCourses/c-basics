// Будем работать с рандомными числами
#include <stdlib.h> // srand(), rand() 0..32767; rand() % 9 -> 0..9;
//получить число от 1 до 10 (rand() % 9) + 1;
//rand() % (max_number - min_number + 1) + min_number -> rand() % (9 - 1 + 1) +1;
//srand(8)
//srand(time(0));
#include <stdio.h>
#include <time.h>
#include <string.h>

int main()
{
    int r, temp, nums[51];
    char buf[6], str[100] = ("Ваши 6 счастливых чисел: ");
    srand(time(NULL)); //основа рандома текущее время
    for(int i=0; i<50; i++)
        nums[i] = i; // заполнение массива числами
    for(int i = 1; i<50; i++)
    {
        r = (rand()% 49) + 1; // Генерация рандомного числа
        temp = nums[i];
        nums[i] = nums[r]; // перемешивание shuffle
        nums[r] = temp;
    }
    for(int i = 1; i <= 6; i++)
    {
        sprintf(buf, "%d", nums[i]); // из nums беру числа и помещаю их в итоговый массив
        strcat(buf, " "); //добавление пробела после каждого числа
        strcat(str, buf);
    }
    fprintf(stdout, "\n%s\n\n",str);
}