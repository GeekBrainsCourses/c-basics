#include <stdio.h>

struct rectangle
{
    int length;
    int width;
    int perimeter;
    int area;
};

typedef struct rectangle Rectangle;

void rectcals(Rectangle rect1, Rectangle * result);



void rectcals(Rectangle rect1, Rectangle * result)
{
    result->perimeter = (rect1.length + rect1.width) * 2;
    result->area = rect1.length * rect1.width;
}

int main(void)
{
    Rectangle rect1, result;
    rect1.length = 15;
    rect1.width = 2;
    rectcals(rect1, &result);
    printf("Периметр прямоугольника: %d\nПлощадь прямоугольника: %d\n", result.perimeter, result.area);

}
