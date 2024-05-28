// Program to implement Patterns in C 
// 1
/*
*****
*****
*****
*****
*****
*/


#include<stdio.h>
#include<conio.h>

int main(){

    int row;
    printf("Enter the Number of Rows Required\n");
    scanf("%d", &row);
    printf("%d\n", row);

    int columns;
    printf("Enter the Number of columns Required\n");
    scanf("%d", &columns);
    printf("%d\n", columns);
    


    for(int i=0; i<row; i++){

        for(int j=0; j<columns; j++){

            printf("*");
        }

        printf("\n");


    }


return 0;
}