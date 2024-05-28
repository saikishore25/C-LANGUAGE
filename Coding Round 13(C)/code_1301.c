// Program to implement Patterns in C 
// 1
/*
***********
*/


#include<stdio.h>
#include<conio.h>

int main(){

    int columns;
    printf("Enter the Number of columns Required\n");
    scanf("%d", &columns);
    printf("%d\n", columns);

    for(int i=0; i<columns; i++){

        printf("*");


    }


return 0;
}