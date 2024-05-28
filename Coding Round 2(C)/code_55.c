// Program to check whether it is an armstrong number or not.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int num;
    int count = 0;
    int temp1;
    int rem = 0;
    int sum = 0;
    printf("Enter the Number Below \n");
    scanf("%d", &num);
    temp1 = num;

    while(num>0){

        num%10;
        num = num/10;
        count++;

    }

    // printf("%d", count);
    num = temp1;

    // printf("%d", temp1);
    while(temp1>0){

        rem = temp1%10;
        sum = sum + (rem*rem*rem);
        temp1 = temp1/10;
    }


    if(num==sum){

        printf("It is an Armstrong Number \n");
    }

    else{

        printf("It is not an Armstrong Number \n");
    }



    return 0;
}