// Q61. Program to print Patterns using Nested Loops.
// PATTERN - 11.

#include<stdio.h>

     int main(){
     int n; 
     printf("Enter the value of n \n");
     scanf("%d", &n);

    for(int j=1; j<=n; j++){

            for(int i=j; i>=1; i--){
            printf("%d", i);
            }
    printf("\n");

}
     return 0;
}