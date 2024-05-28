// Printing address, values using varies methods of Pointers 


#include <stdio.h>

int main()
{
    int a = 20;
    char b = 'A';
    float c = 3.14;
    
    // Pointer Declaration
    
    int* ptr1 = &a;
    char* ptr2 = &b;
    float* ptr3 = &c;
    
    // values with direct variables
    
    printf("The value of a is %d \n", a);
    printf("The value of b is %c \n", b);
    printf("The value of c is %f \n", c);
    
    // values with indirection/ dereference operator
    
    printf("The value of a is %d \n", *ptr1);
    printf("The value of b is %c \n", *ptr2);
    printf("The value of c is %f \n", *ptr3);
    
    // addresses of all the variables(integer format)
    
    printf("The address of a is %d \n", &a);
    printf("The address of b is %d \n", &b);
    printf("The address of c is %d \n", &c);
    
    // addresses of all the variables(integer format)
    
    printf("The address of a is %u \n", &a);
    printf("The address of b is %u \n", &b);
    printf("The address of c is %u \n", &c);
    
    int d = 20;
    int* ptr8 = &a;
    
    printf("%u \n", &*ptr8);         // We cannot Initialize &20 directly as it is not allowed but while conversion 
                                     // &(*ptr8) = &(20) = &(d) = address
    printf("%u", &d);

    
    // addresses of all the variables(integer format)
    
    printf("The address of a is %x \n", &a);
    printf("The address of b is %x \n", &b);
    printf("The address of c is %x \n", &c);
    

    return 0;
}


