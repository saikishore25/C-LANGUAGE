// Program to add two numbers using pointer variables. 


#include <stdio.h>

int main()
{
    int a = 20;
    int b = 30;
    
    int* ptr1 = &a;
    int* ptr2 = &b;
    
    printf("The sum of a and b is %d \n", a+b);
    
    printf("The sum of a and b is %d \n", *ptr1 + *ptr2);

    return 0;
}
