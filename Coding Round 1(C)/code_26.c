// Program to Convert cm to km to inches to feets.

#include <stdio.h>
int main() {

    float distance;
    printf("Enter the distance between the cities(in km) \n");
    scanf("%f \n", &distance); float metre = distance * 1000;

    float cm = metre * 100; float inch = cm/2.54; float ft = inch/12;

    printf("Distance in metres = %f \n", metre); 
    printf("Distance in centimeters = %f \n", cm); 
    printf("Distance in inches = %f \n", inch); 
    printf("Distance in feets = %f \n", ft); 

    return 0; 


    }
