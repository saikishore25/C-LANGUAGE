// Q18. Program to Check the possibility of forming a traingle (angle, sides).

#include<stdio.h>
#include<conio.h>
     int main(){
        int angle1, angle2, angle3, sum;
        printf("Enter the value of angle1 \n");
        scanf("%d \n", &angle1);

        printf("Enter the value of angle2 \n");
        scanf("%d \n", &angle2);

        printf("Enter the value of angle3 \n");
        scanf("%d \n", &angle3);

        sum = angle1 + angle2 + angle3;

        if(sum==180 && angle1>0 && angle2>0 && angle3>0){

            printf("The dimensions and angles satisfy forming a triangle \n");
        }
        else{
            printf("The dimensions and angles do not satisfy forming a triangle \n");
        }



     
     return 0;
}