// Program to show Designated Initialization in C 

#include <stdio.h>

struct tag1{
    
    int a;
    char b;
    float c;
    
};

int main()
{
    struct tag1 C1 = { .c = 3.145, .a = 10, .b = 'A'};         // Designated Initialization of Structure members 
    
    printf("%d %c %f \n", C1.a, C1.b, C1.c);

    return 0;
}

