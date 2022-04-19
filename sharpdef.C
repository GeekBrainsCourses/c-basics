#include <stdio.h>
#define SUM(a,b) (a + b) * 2
#define P 2

int main()
{
	#if P==1
		printf("Выполняется ветка 1 P = %d\n", P);
	#elif P==2 
		printf("Выполняется ветка 2 P = %d\n", P);	
	#else 
		printf("Ветка не определена P = %d\n", P);
	#endif
	getchar();
	#undef P
	#define P 5000
	printf("Теперь константа P = %d\n", P);		
}
