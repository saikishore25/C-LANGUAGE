// 4. free() - Free Memory 
// This function releases the allocated memory after we have dynamically allocated some memory to variables
// Even after the use of free() the pointer will still be pointing to the same memory address 
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num, i, *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &num);
 
    ptr = (int*) malloc(num * sizeof(int)); //memory allocated using malloc
    
    if(ptr == NULL){
        printf("Error! memory not allocated.");
        exit(0);
    }
        
    printf("%p", ptr);                      // The pointer is having some address 
    printf("Enter elements of array: ");
    for(i = 0; i < num; ++i){
        
        scanf("%d", ptr + i);
        
    }
    
    
    free(ptr);                      // After freeing the ptr it will show an undefined behaviour which causes loss of data
    
    for(i = 0; i < num; ++i){
        
        printf("%d", *(ptr + i));       // Any random values will be printed 
        
    }
    printf("\n");
    
    printf("%p", ptr);          // Even here afer freeing of memory the ptr still points to the same memor address 

    return 0;
}

