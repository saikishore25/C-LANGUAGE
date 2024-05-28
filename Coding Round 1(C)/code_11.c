// Program to check whether it is an even, odd or zero

#include<stdio.h>
#include<conio.h>

int main(){

    int num;
    printf("Enter the Number Below \n");
    scanf("%d", &num);

    if(num%2==0){

        if(num==0){

            printf("The Number entered is Zero \n");
        }

        else{

            printf("The Number entered is Even \n");
        }

    }

    else if(num%2!=0){

        printf("The Number entered is Odd \n");
    }



    else{

        printf("Invalid Character \n");
    }  


    return 0;
}