#include <stdio.h>

int main(void)
{
	//чтобы стало совсем понятно давайте напишем небольшую программау вычисляющуюу формулу: k = (m+1)-(n - 1 - r);
	int k = 0, m = 20, n = 40, r = 25;
	//m = m + 1; // 21
	//++m;
	//int nr1 = (--n)-r; // 1 выриант
	//k = m - nr1;
	//printf("Результат %d\n", k);
	printf("Результат %d\n", k = (m+1)-(n - 1 - r));
}