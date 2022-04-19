#include <stdio.h>

int main(int argc, char *argv[])
{
    int three = 3;
    int two = 2;
    int f = 4;
    printf("%1.1f\n", two + 0.0); // типу int прибавляю 0.0
    printf("%1.1f\n", (float)three); // явное приведение к типу данных float
    int index = (f/(double)two); 
    printf("%d\n", index);
    /*int two = 2;
    float a = (float) two;
    printf("%1.1f\n", a);
    float decimal = 5.8;
    int s = (int) decimal;
    printf("%d\n", s);
    /*float a = 3/(two + 0.0);
    printf("%1.1f\n", a);
    3 / 2.0 == 1.5;*/
}