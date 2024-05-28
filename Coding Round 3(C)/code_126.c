// A. Selection Sort 


#include <stdio.h>

int main()
{
    
    int n, min, temp; 
    printf("Enter the Size of Array \n");
    scanf("%d", &n);
    
    int array1[n];
    printf("Enter the Array Elements Below \n");
    
    for(int i=0; i<n; i++){
        
        scanf("%d", &array1[i]);
    }
    
    for(int k=0; k<n; k++){
        
        printf("%d \t", array1[k]);
    }
    
    printf("\n");
    
    
    for(int i=0; i<n; i++){
        
        min = i; 
        
        for(int j=i+1; j<n; j++){
            
            if(array1[j]<array1[min]){
                
                min = j;
            }
        }
        
        temp = array1[i];
        array1[i] = array1[min];
        array1[min] = temp;
        
        
    }
    
    
    for(int l=0; l<n; l++){
        
        printf("%d \t", array1[l]);
    }
    
    
    
    return 0;
}

