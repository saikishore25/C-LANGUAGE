// Q62. Program to print Patterns using Nested Loops.
// PATTERN - 12.

#include<stdio.h>

     int main(){
        int n=5;

    for(int j=1; j<=n; j++){

          for(int i=1; i<=j; i++){
                printf("%d",i);
          }
    printf("\n");

    }

    n=1;
    for(int j=5; j>n; j--){ 

          for(int i=1; i<j; i++){
                printf("%d",i);
          }
    printf("\n");

    }
     return 0;
}