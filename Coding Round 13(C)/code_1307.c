// Pattern 4


#include<stdio.h>
#include<conio.h>


int main(){

    int m;
    printf("Enter the number of rows you want to print \n");

    for(int i=0; i<m; i++){

        for(int j=i; j<m; j++){

            printf("*");
        }

        printf("\n");
    }

    return 0;
}