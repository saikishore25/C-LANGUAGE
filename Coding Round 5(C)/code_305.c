// Program to Explain the addition of pointer variables 


#include <stdio.h>

int main()
{
    int a = 20;
    char b = 'A'; 
    float c = 3.14;
    
    int* ptr1 = &a;
    
    printf("The value of a is %d \n", a);
    printf("The Address of a is %u \n", &a);
    
    printf("The Value of ptr1 is %u \n", ptr1);
    printf("The Address of ptr1 is %u \n", &ptr1);
    printf("The value of a is %d \n", *ptr1);
    
    ptr1++;  // ptr1 = ptr1 + 1
    
    printf("The Value of ptr1 is %u \n", ptr1);
    printf("The Address of ptr1 is %u \n", &ptr1);
    printf("The value of a is %d \n", *ptr1);      // Garbage Value 

    return 0;
}