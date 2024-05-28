// Program to Return the number of digits in an entered number


#include<stdio.h>
#include<conio.h>

int main(){

    int num;
    int count = 0;
    printf("Enter the Number Below \n");
    scanf("%d", &num);

    while(num>0){

        num%10;
        num = num/10;
        count++;

    }

    printf("The Entered Number is an %d digited Number \n", count);

    return 0;
}