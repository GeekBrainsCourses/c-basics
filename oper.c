#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 3, d = 2, e = 4;
	/*int itog = 0, itog2 = 0;
	itog = a + b - c * d / e; //формула не очень удобна
	printf("Итого: %i\n", itog);
	itog2 = (a + b) - ((c * d) / e); //формула удобная
	printf("Итого со скобками: %i\n", itog2);*/

	printf("Сложение %d\n", a + b);
	printf("Вычитание %d\n", b - a);
	printf("Умножение %d\n", d * e);
	printf("Деление %d\n", e / d);
	printf("Остаток от деления %d\n", a % d);
	printf("Инкремент %d\n", ++e);
	printf("Постфиксный инкремент %d\n", a++);
	printf("%d - a\n", a);
	printf("Дикремент %d\n", --d);
	printf("Постфиксный дикремент %d\n", e--);
	printf("%d\n - e", e);
}