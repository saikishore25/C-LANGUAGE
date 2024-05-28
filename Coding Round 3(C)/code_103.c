// Program to print the sum of array Elements 

#include<stdio.h>
#include<conio.h>

int main(){

    int n;
    int sum = 0;
    printf("Enter the value of n below \n");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter the Elements Below \n");

    for(int i=0; i<n; i++){

        scanf("%d", &arr1[i]);
    }

    printf("\n");

    for(int i=0; i<n; i++){

        printf("%d \t", arr1[i]);
    }
    
    printf("\n");

    for(int i=0; i<n; i++){

        sum = sum + arr1[i];

    }

    printf("The Sum of all Array Elements are %d", sum);

    return 0;
}