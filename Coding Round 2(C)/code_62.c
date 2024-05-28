// Program to print multiples of 5 only from n digits set

#include<stdio.h>
#include<conio.h>

int main(){

    int n;
    printf("Enter the Number of Digits \n");
    scanf("%d", &n);

    int sum = 0;

    for(int i=1; i<=n; i++){

        if(i%5==0){

            printf("%d \t", i);
            sum = sum + i;
        }
    }

    printf("\nThe Sum of all the  numbers divisible by 5 is %d", sum);
    return 0;
}