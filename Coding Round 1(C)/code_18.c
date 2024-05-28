//Program to find if the parameters are in coordination to form a triangle 
// if a, b, c are sides of triangle then triangle is valid if all of the three conditions are satisfied 
/* 1. a+b>c
   2. b+c>a
   3. c+a>b

*/

#include<stdio.h>
#include<conio.h>

int main(){

    int side1, side2, side3;
    printf("Enter the values of sides below: \n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(((side1+side2)>side3) && ((side2+side3)>side1) && ((side3+side1)>side2)){

        printf("It is valid Triangle \n");
    }

    else{

        printf("It is not valid Triangle \n");
    }



    return 0;
}