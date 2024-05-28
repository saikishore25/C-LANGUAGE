// Program to explain the basics of Pointers

#include <stdio.h>

int main()
{
    int a = 20;
    char b = 'A';
    float c = 3.14;
    
    int* ptr1 = &a;
    char* ptr2 = &b;
    float* ptr3 = &c;
    
    // Double Pointer in c
    
    int** ptr4 = &ptr1;
    char** ptr5 = &ptr2;
    float** ptr6 = &ptr3;
    
    // accessing the value of a, b, c using double pointers
    
    
    printf("The value of a is %d \n", **ptr4);
    printf("The value of b is %c \n", **ptr5);
    printf("The value of c is %f \n", **ptr6);
     

    return 0;
}