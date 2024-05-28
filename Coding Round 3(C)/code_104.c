// Linear Searching Algorithm(Duplicate Elements also Printed)

#include<stdio.h>
#include<conio.h>

int main(){

    int n;
    printf("Enter the number of Elements you want in an Array \n");
    scanf("%d", &n);

    int arr1[n];
    printf("Enter the Array Elements Below \n");

    for(int i=0; i<n; i++){

        scanf("%d", &arr1[i]);
    }

    int key;
    printf("Enter the Element You want to Search \n");
    scanf("%d", &key);

    for(int i=0; i<n; i++){

        if(arr1[i]==key){

            printf("The Element Is found at arr1[%d] Location in the Array \n", i);
        }
    }

    return 0;
}