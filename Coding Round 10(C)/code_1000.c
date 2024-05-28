// Dynamic Memory Allocation 
// Buitl in Functions to implement DMA 
// 1. malloc() - Memory Allocation 


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the Number of Values You Want to Enter Below: \n");
    scanf("%d", &n);
    
    int *ptr = (int*) malloc(sizeof(int)*n);
    
    if(ptr==NULL){
        
        print("Memory Allocation Failed!!!");
        exit(0);
    }
    
    for(int i=0; i<n; i++){
        
        scanf("%d", (ptr+i));
    }
    
    printf("The Space for these values are allocated Dynamically \n");
    for(int i=0; i<n; i++){
        
        printf("%d \n", *(ptr+i));
    }
    
    free(ptr);
    
    

    return 0;
}

