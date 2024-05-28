// Program to print the sum of individual digits of entered number

#include<stdio.h>
#include<conio.h>

int main(){

    int num;
    int rem = 0, sum = 0;

    printf("Enter the Number Below \n");
    scanf("%d", &num);

    while(num>0){

        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }

    printf("The Sum is %d \n", sum);

    return 0;
}