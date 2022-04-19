#include <stdio.h>
#include <math.h>

int calculateSquareEquality(int a, int b, int c, float* x1, float* x2)
{
    float D;
    D = pow(b,2) - 4*a*c;
    *x1 = ((-b)+sqrt(D))/(2*a);
    *x2 = ((-b)-sqrt(D))/(2*a);
    if (D == 0)
        return 0;
    else if (D<0)
        return -1;
    else
        return 1;
}

int main(void)
{
    float am, bm, cm, x1, x2;
    int ami, bmi, cmi, res;
    do
    {
    printf("Введите коэффициенты a, b, c и нажмите Enter: ");
    scanf("%f%f%f", &am, &bm, &cm);
    }while((am != (int)am) || (bm != (int)bm) || (cm != (int)cm)) ;
    ami = (int)am;
    bmi = (int)bm;
    cmi = (int)cm;
    printf("коэффициент a = %d\nкоэффициент b = %d\nкоэффициент c = %d\n", ami, bmi, cmi);
    res = calculateSquareEquality(ami, bmi, cmi, &x1, &x2);
    if (res == -1)
        printf("Нет корней\n");
    else if (res == 0)
        printf("Дискриминант равен нулю, существует только один корень: %f\n", x1);
    else
        printf("Дискриминант больше ноля, существует два корня:\nПервый корень %f\nВторой корень %f\n",x1,x2);
}

