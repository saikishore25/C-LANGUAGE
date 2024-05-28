// INSERTION SORT 


#include <stdio.h>

int main()
{
    int n, j; 
    printf("Enter the size of Array \n");
    scanf("%d", &n);
    
    int array1[n];
    printf("Enter the Array Elements Below \n");
    
    for(int i=0; i<n; i++){
        
        scanf("%d", &array1[i]);
        
    }
    
    for(int i=0; i<n; i++){
        
        printf("%d \t", array1[i]);
        
    }
    
    
    printf("\n");
    
    for(int i=1; i<n; i++){
        
        
        key = array1[i];
        j = i -1;
        
        while(j>=0 && array1[j]>key){
            
            array1[j+1] = array1[j];
            j = j-1;
        }
        
        a[j+1] = key;
        
        
    }
    
    

    return 0;
}

