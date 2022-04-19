#include <stdio.h>

int main()
{
    int massiv[2][3] = {{'A','B','C'},{10,20,30}};
    printf("element[0][0] = %c   ", massiv[0][0]);
    printf("element[0][1] = %c   ", massiv[0][1]);
    printf("element[0][2] = %c\n", massiv[0][2]);
    printf("element[1][0] = %d  ", massiv[1][0]);
    printf("element[1][1] = %d   ", massiv[1][1]);
    printf("element[1][2] = %d\n", massiv[1][2]);
    massiv[1][0] = 100;
    massiv[1][1] = 200;
    massiv[1][2] = 300;
    printf("\n");
    printf("element[0][0] = %c   ", massiv[0][0]);
    printf("element[0][1] = %c   ", massiv[0][1]);
    printf("element[0][2] = %c\n", massiv[0][2]);
    printf("element[1][0] = %d  ", massiv[1][0]);
    printf("element[1][1] = %d   ", massiv[1][1]);
    printf("element[1][2] = %d\n", massiv[1][2]);
}