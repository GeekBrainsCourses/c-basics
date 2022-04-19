#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10

int* cleararr(int size)
{
    return calloc(size, sizeof(int));
}

int main(void)
{
    int* array = cleararr(ARRAY_SIZE); 
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        
        printf("%d ", *(array + i));
    }
    puts("");
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        
        *(array + i) = i * 10;
    }    
    puts("");
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        
        printf("%d ", *(array + i));
    }
    puts("");    
}

//int array[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};