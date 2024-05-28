// Program to find the area of sqaure and rectangle

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int main(){

    char shape[10];
    puts("Enter the shape below");
    gets(shape);

    if(!(strcmp(shape,"square"))){

        int length;
        printf("Enter the lenght of side below \n");
        scanf("%d", &length);

        printf("The Area of the Square is %f", pow(length,2));

    }

    else if(!(strcmp(shape,"rectangle"))){

        int length;
        int breadth;
        printf("Enter the values of length and breadth below \n");
        scanf("%d %d", &length, &breadth);

        printf("The Area of rectangle is %d", length*breadth);

    }

    else{

        printf("Limit Exceeded \n");
    }

    return 0;
}