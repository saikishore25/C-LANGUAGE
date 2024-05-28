// Program to find the largest of two numbers

#include<stdio.h>
#include<conio.h>

int main(){

    int a, b;
    printf("Enter the value of a and b below: \n");
    scanf("%d %d", &a, &b);

    if(a>b){

        printf("The value of a is greater than that of b \n");
    }

    else{

        printf("The value of b is greater than that of a \n");
    }

    return 0;
}