// Q60. Program to print Patterns using Nested Loops.
// PATTERN - 10.

#include<stdio.h>

     int main(){
        int n=5;

    for(int j=1; j<=n; j++){
     for(int i=6; i>=1; i--){
        printf("%d", i);
     }
        printf("\n");
    }
     return 0;
}