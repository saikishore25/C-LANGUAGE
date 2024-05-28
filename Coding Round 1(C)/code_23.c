//  Program to Swap two numbers using third variable 

#include<stdio.h>
#include<conio.h>

int main(){

    int a,b; // a = 5, b = 4
    int temp = 0;
    printf("Enter the values of a and b below \n");
    scanf("%d %d", &a, &b);

    printf("\n");

    printf("The value of a before swap: %d \n", a);
    printf("The value of b before swap: %d \n", b);

    temp = a;
    a = b;
    b = temp;

    printf("The value of a after swap: %d \n", a);
    printf("The value of b after swap: %d \n", b);


}