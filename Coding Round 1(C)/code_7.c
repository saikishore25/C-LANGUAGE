// Program to find the area of circle and parallelogram 

#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

#define pi 3.14

int main(){

    char shape[10];
    puts("Enter the shape below");
    gets(shape);

    if(!(strcmp(shape,"circle"))){

        int radius;
        printf("Enter the radius of the circle below \n");
        scanf("%d", &radius);

        printf("The Area of the Circle is %f", pi*radius*radius);

    }

    else if(!(strcmp(shape,"parallelogram"))){

        int Base;
        int Height;
        printf("Enter the values of base and height below \n");
        scanf("%d %d", &Base, &Height);
 
        printf("The Area of parallelogram is %d", Base*Height);

    }

    else{

        printf("Limit Exceeded \n");
    }

    return 0;
}