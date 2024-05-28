// PROGRAM TO FIND THE SMALLEST AND LARGEST ELEMENT IN AN ARRAY LIST.

#include <stdio.h>

int main()
{
    int arr1[10];
    
    printf("Enter the array elements below \n");
    
    for(int i=0; i<10; i++){
        
            scanf("%d \n", &arr1[i]);
    }
    
    printf("\n");
    
    for(int i=0; i<10; i++){
        
            printf("%d \t", arr1[i]);
    }
    
    printf("\n");
    
    int max = arr1[0];
    int min = arr1[0];
    
    for(int i=0; i<10; i++){
        
            if(arr1[i]>max){
                
                    max = arr1[i];
            }
            
            if(arr1[i]<min){
                
                    min = arr1[i];
            }
    }
    
    printf("The largest element in the array is %d \n", max);
    printf("The smallest element in the array is %d \n", min);

    return 0;
}

