// Program to Arrange the Elements in Ascending Order 

#include <stdio.h>

int main()
{
    int arr1[10] = {1,5,10,3,4,12,6,9,10,4};
    int temp;
    
    for(int i=0; i<10; i++){
        
            for(int j=i+1; j<10; j++){
                
                    if(arr1[i]>arr1[j]){
                        
                        temp = arr1[i];
                        arr1[i] = arr1[j];
                        arr1[j] = temp;
                    }
            }
    }
    
    for(int i=0; i<10; i++){
        
            printf("%d \t", arr1[i]);
    }

    return 0;
}

