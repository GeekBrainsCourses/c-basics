#include <stdio.h>
#define ARRAY_LENGTH 5

int chet(int* array, int arraylength)
{
    int n = 0;
    for(int i = 0; i < arraylength; i++)
            if((array[i]%2) != 0)
            {   
                array[i]*=2;
                n++;
                continue;
            }  
        if (n > 0)
            return 1;
        else
            return 0;          
} 

int main()
{
    int arr[ARRAY_LENGTH] = {2, 2, 2, 2, 2};
    int res = chet(arr, ARRAY_LENGTH);
    printf("%d\n",res); 
    for(int i=0; i < ARRAY_LENGTH; i++)
        printf("%d ", arr[i]);
    printf("\n");    
}