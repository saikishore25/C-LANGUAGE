// Program to check whether it is a strong number or not

#include<stdio.h>
#include<conio.h>

int factorial(int);

int main(){

    int num;
    int temp;
    int rem = 0;
    int sum = 0;
    printf("Enter the Number Below \n");
    scanf("%d", &num);
    temp = num;

    while(num>0){

        rem = num%10;
        sum = sum + factorial(rem);
        num = num/10;
    }

    if(temp==sum){

        printf("It is a Strong Number \n");
    }

    else{

        printf("It is not a Strong Number \n");
    }

    return 0;
}

int factorial(int num){


    // printf("Enter the Number Below: \n");
    // scanf("%d", &num);

    int fact;
    fact = num;

    for(int i=num-1; i>=1; i--){

        fact = fact*i;
    }

    return fact;
}