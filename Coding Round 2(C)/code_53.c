// Program to reverse an entered number

#include<stdio.h>
#include<conio.h>

int main(){

    int num;
    int rem = 0;
    int rev = 0;
    printf("Enter the Number Below \n");
    scanf("%d", &num);

    while(num>0){

        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;

    }

    printf("The Reverse of the Number is %d \n", rev);
    

    return 0;
}