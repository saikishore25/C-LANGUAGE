// Program to showcase typdefined datatypes

#include <stdio.h>

typedef struct tag1{
    
    int a;
    char b;
    float c;
    
}newstruct;

int main()
{
    // newstruct S1 = {1,'A',3.14};
    struct tag1 S1 = {1,'A',3.14};         // We can access it in both previous name and new name. This is the speciality of typedef, it creates a synonym of same type
    printf("%d %c %f \n", S1.a, S1.b, S1.c);
    typedef int integer;    // This means that int is now similar to integer which is now acting as a new data type.
    integer a = 20;
    printf("%d \n", a);

    return 0;
}

