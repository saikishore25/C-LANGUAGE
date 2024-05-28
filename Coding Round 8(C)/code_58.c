// // Q58. Program to print Patterns using Nested Loops.
// PATTERN - 08.

#include<stdio.h>

     int main(){
        int n; // n=5
        printf("Enter the number of rows \n");
        scanf("%d \n", &n);
     
     for(int i=0; i<n; i++){ 

           for(int j=0; j<=i; j++){
            printf("*");
           }
        printf("\n");
     }
     return 0;
}