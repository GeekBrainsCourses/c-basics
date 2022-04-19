#include <stdio.h>

int main()
{
	int num = 5, tum = 8, vum = 4;
	char letter = 'A', let = 'a';
	printf("5<8 (1 - yes, 0 - no) value = %d\n", num<tum);
	printf("5>4 (1 - yes, 0 - no) value = %d\n", tum>vum);
	printf("A equal to a (1 - yes, 0 - no) value = %d\n", letter==let);
	printf("5!=8 (1 - yes, 0 - no) value = %d\n", num!=tum);
	vum++;
	printf("vum++ value vum = %d\n", vum);
	printf("5<=5 (1 - yes, 0 - no) value = %d\n", num<=vum);
	printf("5>=5 (1 - yes, 0 - no) value = %d\n", num>=tum);
	vum = 8;
	printf("vum++ value vum = %d\n", vum);
	printf("5==8==5 (1 - yes, 0 - no) value = %d\n", num==tum==vum);

}