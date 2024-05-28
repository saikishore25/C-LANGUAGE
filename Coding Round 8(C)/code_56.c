// Q54. Program to print Patterns using Nested Loops.
// PATTERN - 06.

#include<stdio.h>

     int main(){

    for(int j=1; j<7; j++){

         for(int i=1; i<6; i++){
           printf("%c ", j+64);
        }
     printf("\n");

    }
     return 0;
}