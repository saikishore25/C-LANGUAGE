//Program to print the sum of array elements using Pointers 

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Enter the Number of Elements You want in an array \n");
    scanf("%d", &n);
    
    int arr1[n];
    printf("Enter the Array Elements Below \n");
    
    for(int i=0; i<n; i++){
        
        scanf("%d", &arr1[i]);
    }
    
    int* ptr1 = &arr1[0];
    
    for(int i=0; i<n; i++){
        
        sum = sum + *ptr1;
        ptr1++;
        
    }
    
    printf("The Sum of Array Elements are %d \n", sum);

    return 0;
}