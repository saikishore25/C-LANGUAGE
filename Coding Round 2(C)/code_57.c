// Program to find the factorial of an entered Digit

#include<stdio.h>
#include<conio.h>

int main(){

    int num;
    int fact = 0;
    printf("Enter the Number Below: \n");
    scanf("%d", &num);

    fact = num;

    for(int i=num-1; i>=1; i--){

        fact = fact*i;
    }

    printf("The Factorial of %d is %d \n", num, fact);


    return 0;
}