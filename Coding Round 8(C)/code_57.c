// Q54. Program to print Patterns using Nested Loops.
// PATTERN - 07.

#include<stdio.h>

     int main(){

        for(int j=1;j<=6; j++){
     
        for(int i=5; i>=1; i--){
            printf("%d", i);
        }

        printf("\n");
        }

     return 0;
}