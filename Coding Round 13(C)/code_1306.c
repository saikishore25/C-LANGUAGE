// Pattern 5

#include<stdio.h>
#include<conio.h>

int main(){

    int m,n;
    printf("Enter the Number of rows and coloums to print \n");
    scanf("%d %d", &m, &n);

    for(int i=1; i<=m; i++){

        for(int j=1; j<=n; j++){

            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}