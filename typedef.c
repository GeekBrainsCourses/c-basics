// изучаем структуры struct
#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

typedef struct
{
    Point a;
    Point b;
} Box;

Point top = {15,38};
Point bottom;
Box rect = {6,12,25,45};

int main()
{
    bottom.x = 5;
    bottom.y = 8;
    fprintf(stdout, "top.x = %d ", top.x);
    fprintf(stdout, "top.y = %d\n", top.y);
    fprintf(stdout, "bottom.x = %d ", bottom.x);
    fprintf(stdout, "bottom.y = %d\n", bottom.y);
    fprintf(stdout, "Point a rect.a.x =  %d\n", rect.a.x);
    fprintf(stdout, "Point a rect.a.y =  %d\n", rect.a.y);
    fprintf(stdout, "Point a rect.b.x =  %d\n", rect.b.x);
    fprintf(stdout, "Point a rect.b.y =  %d\n", rect.b.y);
    fprintf(stdout, "\n");
}