// Q23. Program to check whether a number is divisible by both 5 and 11 or not. 

#include<stdio.h>
#include<conio.h>
     int main(){
        int a;
        printf("Enter the Number \n");
        scanf("%d \n", &a);

        if(a%5==0 && a%11==0){
            printf("The Number Entered is divisible by both 5 and 11 \n");

        }
        else if(a%5==0){
            printf("The Number Entered is divisible only by 5 \n");
        }

        else{
            printf("The Number Entered is divisible only by 11 \n");
        }
     return 0;
}