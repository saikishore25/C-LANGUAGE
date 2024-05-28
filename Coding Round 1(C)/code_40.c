// Q20. Program to make a simple calculator using switch case. (BASIC)

#include<stdio.h>

     int main(){
     int a, b;
     char op;

     printf("Enter the value of a \n");
     scanf("%d \n", &a);

     printf("Enter the value of b \n");
     scanf("%d \n", &b);

     printf("Enter the operator to be used \n");
     scanf("%c \n", &op);

     switch(op){

        case '+':
        printf("The addition of the two numbers is %d \n", a+b);
        break;

        case '-':
        printf("The subtraction of the two numbers is %d \n", a-b);
        break;

        case '*':
        printf("The multiplication of the two numbers is %d \n", a*b);
        break;

        case '/':
        printf("The division of the two numbers is %d \n", a/b);
        break;

        default:
        printf("Still need to be updated for your purpose.");
        break;

     }







     return 0;
}