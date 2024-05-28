// Program to Input a Two Dimensional Array 

#include<stdio.h>
#include<conio.h>

int main(){

    int m, n;
    printf("Enter the Values of m and n below \n");
    scanf("%d %d", &m, &n);

    int arr1[m][n];
    printf("Enter the Array Elements Below \n");

    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){

            scanf("%d", &arr1[i][j]);
        }

    }

    printf("\n");

    for(int i=0; i<m; i++){

        for(int j=0; j<n; j++){

            printf("%d \t", arr1[i][j]);
        }

        printf("\n");

    }



    return 0;
}