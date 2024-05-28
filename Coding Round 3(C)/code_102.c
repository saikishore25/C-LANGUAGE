// Program to Enter the Elements in an Array at Run Time

#include<stdio.h>
#include<conio.h>

int main(){

    int n;
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

    return 0;
}