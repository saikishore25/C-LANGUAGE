// Q51. Program to print different patterns using Nested Loops.
// PATTERN - 02.

#include<stdio.h>

     int main(){
     int a;
     int i;
     printf("Enter the value of a \n");
     scanf("%d \n", &a);

    for(int j=1; j<8; j++){

         for(i=1; i<a; i++){
             printf("%d ", j);

            }
            printf("\n");

    }    
     return 0;
}