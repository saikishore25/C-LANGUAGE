// Program to explain structure in C.

#include <stdio.h>

struct tag1 {
    
    int roll;
    char name[20];
    char mob[20];
    
};
int main()
{
    struct tag1 C1={38,"kishore","999"};
    struct tag1 C2;
    printf("%u \n", &C1);
    printf("%u \n", &C1.roll);    // C1 contains the base address of structure which is base address of its first member.
    
    printf("%u \n", &C2);
    
    
    struct tag1* ptr = &C1;
    printf("%d \n", (*ptr).roll);
    printf("%d \n", ptr->roll);
    printf("%d \n", C1.roll);
    return 0;
}

