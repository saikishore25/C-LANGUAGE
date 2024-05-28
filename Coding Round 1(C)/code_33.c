// Q7. Program to calculate area and circumference of square and circle(User Input)

#include<stdio.h>
#include<conio.h>

int main(){
        float r;
        float pi = 3.1465;
        

        printf("Enter the value of radius \n");
        scanf("%f \n", &r);

        float area = pi*r*r;
        printf("The area of circle is %f \n", area);
        float circum = 2*pi*r;
        printf("The circumference of a circle is %f \n", circum);



}