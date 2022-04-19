#include <stdio.h>
#include <math.h>

struct line
{
    int length;
    struct
    {
        int x;
        int y;        
    } point1;
    struct
    {
        int x;
        int y;
    } point2;
};

typedef struct line Line;

void linl(Line a, Line b, Line * linelength)
{
    linelength->length = sqrt( pow((b.point2.x - a.point1.x),2) + pow((b.point2.y - a.point1.y),2) );
}

int main(void)
{
    Line a,b, linelength;
    a.point1.x = 10;
    a.point1.y = 12;
    b.point2.x = 10;
    b.point2.y = 15;
    printf("Эта программа считает длинну линии по координатам двух точек\n");
    linl(a, b, &linelength);
    printf("Длина линии: %d\n", linelength.length);    
}
