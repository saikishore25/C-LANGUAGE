// Program to check the largest of 3 numbers. 


#include<stdio.h>
#include<conio.h>

int main(){

    int a, b, c;
    printf("Enter the values of a, b and c below: \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b&&a>c){

        printf("a is the largest among the three values \n");
    }

    else if(b>a&&b>c){

        printf("b is the largest among the three values \n");
    }

    else{

        printf("c is the largest among the three values \n");
    }


    return 0;
}