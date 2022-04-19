#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	printf("a= %d, b = %d\n", a, b);
	printf("Сложение a+=b (10+20) a = %d\n", a+=b); // a = a+b; a = 10 + 20; a = 30;
	printf("Вычитание a-=b (30-20) a = %d\n", a-=b); // a = a - b a = 30 - 20; a = 10;
	printf("Умножение b*=a (20*10) b = %d\n", b*=a); // b = b * a b= 20 * 10 = 200;
	printf("Деление b/=a (200/10) b = %d\n", b/=a); // b = b / a; b=200 / 10 = 20
	printf("Остаток от деления a%%=b (10%%20) a = %d\n", a%=b); 
}