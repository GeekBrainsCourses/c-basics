#include <stdio.h>

int main()
{
	int yes=1, no=0;
	printf("\n");
	printf("Logic values yes and no = %d\n", yes && no);
	printf("Logic values no and no = %d\n", no && no);
	printf("Logic values yes and yes = %d\n", yes && yes);
	printf("Logic values yes or no = %d\n", yes || no);
	printf("Logic values yes or yes = %d\n", yes || yes);
	printf("Logic values no or no = %d\n", no || no);
	printf("Logic values !yes = %d\n", !yes);
	printf("Logic values !no = %d\n", !no);
}