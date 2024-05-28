//  Program to Swap two numbers without using third variable

#include<stdio.h>
#include<conio.h>

int main(){

    int a,b; // a = 5, b = 4
    printf("Enter the values of a and b below \n");
    scanf("%d %d", &a, &b);

    printf("\n");

    printf("The value of a before swap: %d \n", a);
    printf("The value of b before swap: %d \n", b);

    a = a + b;  // 9
    b = a - b;  // 9-4 = 5
    a = a - b;  // 9-5 = 4


    printf("The value of a after swap: %d \n", a);
    printf("The value of b after swap: %d \n", b);


}