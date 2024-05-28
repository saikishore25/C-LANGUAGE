// Q73. Program to show the working of bitwise operaters.

#include<stdio.h>

int main(){

    int a = 5;
    int b = 10;
    int c = 12;

    printf("The bitwise 'and' operator: %d \n", a&b);
    printf("The bitwise 'or' operator: %d \n", a|b);
    printf("The bitwise 'xor' operator: %d \n", a^b);
    printf("The bitwise left shift operator: %d \n", c<<3 );
    printf("The right shift operator: %d \n", (b+c)>>3);
    printf("The bitwise 'not' operator: %d \n", ~a);     // negated value = -(a+1); SHORT CUT
    
    

}