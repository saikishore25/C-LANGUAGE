// Q58. Program to print Patterns using Nested Loops.
// PATTERN - 09.

#include<stdio.h>

     int main(){
        int n;  //n =5
        printf("Enter the value of n \n");
        scanf("%d \n", &n);

     for(int i=n; i>=1; i--){

        for(int j=1; j<=i; j++){
                printf("*");
        }

        printf("\n");
     }
     return 0;
}