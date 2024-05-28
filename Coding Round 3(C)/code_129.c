// Program to Enter the Elements and sort the elements accordingly (even or odd) into different arrays


#include <stdio.h>

int main()
{
    int arr1[20];
    int arr2[20];
    int arr3[20];
    
    printf("Enter the elements of array 1 below \n");
    
    for(int i=0; i<20; i++){
        
            scanf("%d \n", &arr1[i]);
    }
    
    printf("\n");
    
    for(int i=0; i<20; i++){
        
            printf("%d \t", arr1[i]);
    }
    
    printf("\n");
    
    for(int i=0; i<20; i++){
        
            if(arr1[i]%2 == 0){
                
                    arr2[i] = arr1[i];
            }
            
            else{
                
                    arr3[i] = arr1[i];
            }
    }
    
    for(int i=0; i<20; i++){
        
            if(arr2[i]!=0){
                
                printf("%d \t", arr2[i]);
            }
            
    }
    
    for(int i=0; i<20; i++){
        
            if(arr3[i]!=0){
                
                printf("%d \t", arr3[i]);
            }
    }
    
    
    return 0;
}


