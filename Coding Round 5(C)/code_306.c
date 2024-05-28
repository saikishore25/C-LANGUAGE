// Program to print the values of an array using pointer variable 

#include <stdio.h>

int main()
{
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    
    int* ptr1 = &arr1;
    
    printf("The Address of arr1[0] is %u \n", &arr1[0]);
    printf("The Base Address of arr1 is %u \n", arr1);
    
    for(int i=0; i<10; i++){
        
        printf("The value of arr1[%d] is %d \n", i, *ptr1);
        ptr1++;
    }

    return 0;
}