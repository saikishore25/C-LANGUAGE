// Program to print the sum of all odd numbers from the set of n digits


#include<stdio.h>
#include<conio.h>

int main(){

    int n;
    printf("Enter the Number of Digits \n");
    scanf("%d", &n);

    int sum = 0;

    for(int i=1; i<=n; i++){

        if(i%2!=0){

            printf("%d \t", i);
            sum = sum + i;
        }
    }

    printf("\nThe Sum of all the odd numbers is %d", sum);
    return 0;
}