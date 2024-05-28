// Q38. Program to accept a coordinate point and return the quadrant number.

#include<stdio.h>

     int main(){
     int x,y;
     printf("Enter the value of x \n");
     scanf("%d \n", &x);

     printf("Enter the value of y \n");
     scanf("%d \n", &y);

     if(x>0 && y>0){
        printf("The coordinates (%d,%d) lie in the 1st Quadrant \n", x,y);
     }

     else if(x<0 && y<0){
        printf("The coordinates (%d,%d) lie in the 4th Quadrant \n", x,y);
     }

     else if(x>0 && y<0){
        printf("The coordinates (%d,%d) lie in the 2nd Quadrant \n", x,y);
     }
     else{
        printf("The coordinates (%d,%d) lie in the 3rd Quadrant \n", x,y);
     }
     return 0;
}