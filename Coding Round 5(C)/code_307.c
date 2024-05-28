// Program to perform addition of pointers in array 


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of Elements You want in an Array \n");
    scanf("%d", &n);
    
    int arr1[n];
    printf("Enter the Array Elements Below \n");
    
    for(int i=0; i<n; i++){
        
        scanf("%d", &arr1[i]);
    }
    
    int* ptr1 = &arr1[0];
    
    printf("%d \n", *ptr1);
    
    ptr1 = ptr1 + 4;
    
    // ptr1 + 4;     // This will still print the same value as it is not assigned to ptr1 again
    
    printf("%d \n", *ptr1);
    
    *ptr1 = 56;       // Changed the value of arr1[4] from 5 to 56;
    
    // printf("%d \n", *ptr1);
    
    for(int i=0; i<n; i++){
        
        printf("%d", arr1[i]);
    }
    
    
    

    return 0;
}