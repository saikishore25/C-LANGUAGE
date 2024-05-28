// Program to Check if it is a Palindrome Number or Not

#include<stdio.h>
#include<conio.h>

int main(){

    int num;
    int rem = 0;
    int rev = 0;
    printf("Enter the Number Below \n");
    scanf("%d", &num);
    int temp = num;

    while(num>0){

        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;

    }

    if(temp==rev){

        printf("It is a Palindrome \n");
    }

    else{

        printf("It is not a Palindrome \n");
    }


    return 0; 
}