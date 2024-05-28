// Q8. Area of Trianlge using Heron's formula and normal formula.

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    // float base, height;
  
    // printf("Enter the value of base \n");
    // scanf("%f \n", &base);

    // printf("Enter the value of height \n");
    // scanf("%f \n", &height);

    // float area = (base*height)/2;
   
    // printf("The area of triangle using Heron's Formula is %0.2f \n", area);



        float a, b, c;
        printf("Enter the values of a, b and c \n");
        scanf("%f %f %f \n", &a, &b, &c);

        float s = (a+b+c)/2;
        float area_in = s*(s-a)*(s-b)*(s-c);

        float area = sqrt(area_in);
        printf("The area of given triangle is %f \n", area);



}


