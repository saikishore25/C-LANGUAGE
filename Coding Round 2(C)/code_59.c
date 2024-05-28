// Program to Print the sum of n digits entered

#include<stdio.h>
#include<conio.h>

int main(){

    int n;
    printf("Enter the Number of digits you want to calculate sum for \n");
    scanf("%d", &n);

    int sum = 0;

    for(int i=1; i<=n; i++){

        sum = sum + i;

    }

    printf("The Sum of the Entered Digits are %d", sum);


    return 0;
}