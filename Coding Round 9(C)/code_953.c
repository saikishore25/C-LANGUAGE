// PROGRAM TO FIND THE FACTORIAL OF A GIVEN NUMBER USING RECURSIONS 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 

int factorial(int);

    int main(){

        int num;
        printf("Enter the Number To Find Its Factorial \n");
        scanf("%d", &num);

        int fact = factorial(num);
        printf("The Factorial is %d \n", fact);

     
    return 0;
}


int factorial(int n){


    if(n==0){

        return 1;
    }

    else{

        return n*factorial(n-1);
    }


}