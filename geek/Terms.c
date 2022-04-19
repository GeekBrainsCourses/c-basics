/*
 * Terms.c
 *
 *  Created on: 27 мая 2017 г.
 *      Author: ivanovcinnikov
 */
#include <stdio.h>

int main(int argc, const char* argv[]) {
	char answer;
/*
	printf("Do you want me to salute you? (y/n)");
	scanf("%c", &answer);
	if(answer == 'y') {
		printf("Hello, user!");
	} else if(answer == 'n') {
		printf("I didn't want to salute you anyway!");
	} else {
		printf("I can't understand your input!");
	}
*/
/*	int a = 10;
	int b = 15;

	a = (a > b) ? b : 0;
	if (a > b)
		a = b;
	else
		a = 0;
*/
	//printf("\n%s", (1>0) ? "true" : "false");

	// > < >= <= ==
	// && || ! ^
	if (1 && 0) printf("false\n");
	if (1 || 0) printf("true\n");
	if (!(1)) printf("false\n");
	if (1 ^ 0) printf("false\n");
/*
	if (1) {
		if (1){
			//...
		}
	}
*/
	printf("\n");
	int x = 7;
	if ((x >= 0) && (x <= 10)) {
		printf("X Fits!");
	}

	return 0;
}
