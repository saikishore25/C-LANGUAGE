//Program to find the Multiplication of N numbers.


#include<stdio.h>
#include<conio.h>


int main(){

    int n;
    printf("Enter the Number of numbers you want to Multiply \n");
    scanf("%d", &n);

    if(n==2){ 

        int a, b;
        printf("Enter the values of a and b below: \n");
        scanf("%d %d", &a, &b);

        printf("The Product of a and b is %d \n", a*b);
    }

    else if(n==3){ 

        int a, b, c;
        printf("Enter the values of a, b and c below: \n");
        scanf("%d %d %d", &a, &b, &c);

        printf("The Product of a and b and c is %d \n", a*b*c);
    }

    else if(n==4){ 

        int a, b, c, d;
        printf("Enter the values of a, b, c and d below: \n");
        scanf("%d %d %d %d", &a, &b, &c, &d);

        printf("The Product of a, b, c, d is %d \n", a*b*c*d);

    }

    else if(n==5){ 

        int a, b, c, d, e;
        printf("Enter the values of a, b, c, d and e below: \n");
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        printf("The Product of a, b, c, d, e is %d \n", a*b*c*d*e);

    }


    else{

        printf("Limit of Entries Exceeded \n");
    }


}