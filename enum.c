#include <stdio.h>
#define SIZE 1000

int main()
{
	enum DAYS {MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY} days;
	printf("MONDAY = %d\n", MONDAY);
	printf("TUESDAY = %d\n", TUESDAY);
	printf("WEDNESDAY = %d\n", WEDNESDAY);
	printf("THURSDAY = %d\n", THURSDAY);
	printf("FRIDAY =  %d\n", FRIDAY);
	printf("SATURDAY = %d\n", SATURDAY);
	printf("SUNDAY = %d\n", SUNDAY);
	/*int days = MONDAY + TUESDAY + WEDNESDAY + THURSDAY + FRIDAY + SATURDAY + SUNDAY
	printf("SUMMA CONSTANT = %d\n", days);
	typedef int MYTYPE;
	MYTYPE myvar = 100;
	printf("myvar = %d\n", myvar);*/
	enum DAYS day = MONDAY + TUESDAY;
	days = MONDAY + SUNDAY;
	printf("SUMMA day MONDAY %d\n", day);
	printf("SUMMA days MONDAY %d\n", days);
	typedef int MYTYPE;
	MYTYPE myvar = 100;
	printf("myvar = %d\n", myvar);
	//typedef char CH;
	typedef char string[SIZE];
	string str = {"stroka STRING"};
	printf("%s\n", str); 
}