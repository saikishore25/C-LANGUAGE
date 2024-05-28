// Pattern 3

#include<stdio.h>
#include<conio.h>

int main(){

    int m;
    printf("Enter the number of rows you want to print \n");
    scanf("%d", &m);

    for(int i=0; i<m; i++){

        for(int j=0; j<=i; j++){

            printf("*");
        }

        printf("\n");
    }

    return 0;
}