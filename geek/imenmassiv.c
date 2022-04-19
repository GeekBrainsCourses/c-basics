#include <stdio.h>
#define ARRAY_LENGTH 5

void arra16(unsigned int* array, int length)
{
    unsigned short* out = array;
    for(int i=0; i < length*2; i++)
        printf("%d ", *(out+i));
    printf("\n"); 

}

int main(void)
{   
    printf("%x\n",b);
    unsigned    int arr[ARRAY_LENGTH] = {2000000, 100000, 230000, 65535, 65536};   
    arra16(arr,ARRAY_LENGTH);
    for(int i=0; i < ARRAY_LENGTH; i++)
        printf("%d ", arr[i]);
    printf("\n");     
}