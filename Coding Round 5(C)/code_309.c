//Program to explain the Array Indexing of Pointers 

#include<stdio.h>

int main(){
    
    int arr1[5] = {1,2,3,4,5};
    int* ptr1 = &arr1[0];
    // printf("%x \n", &ptr1);
    // ptr1 = ptr1 + 1;
    // ptr1++;
    ptr1 = ptr1 + 5;
    // *ptr1 = 25;
    // printf("%d \n", arr1[2]);
    printf("%d \n", *ptr1);
    printf("%x \n", arr1);
    printf("%x \n", &arr1[0]);
    printf("%x \n", &arr1);
    
    
    
    return 0;
}
