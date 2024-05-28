// Program to showcase Enum in C 

#include <stdio.h>

enum tag1{
    
    sun = 20,          // The first member gets the value of zero. which will be incremented by 1 for the next member 
    mon,               // We can even initialize the values then and there itself, whatever the value we give it will increment 1 to the next member
    tues,              // These are better than #define preprocessor sometimes as it gives values by itself 
};

int main()
{
    enum tag1 ent1 = tues;
    printf("%d \n", ent1);         // We can print or assign  the enum membes directly without using dot operator.
    int x = mon;
    printf("%d \n", x);
    
    ent1 = wed;         // This gives an error as the variable of the enum can only be given its members as its values, any other data is given it throws an error
    // ent1. sun = 35;             // We get an error over here saying ent1 is not a structure or a union, so not need of any operator 
    // printf("%d \n", sun);
    return 0;
}