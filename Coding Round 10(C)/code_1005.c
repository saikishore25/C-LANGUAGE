// Memory Leak in C is caused due to improper usage of DYNAMIC MEMORY ALLOCATION 
// The Memory layers are 
// A. HEAP -
// 1. FREE POOL OF MEMORY 
// 2. ITS SIZE IS NOT FIXED 

// B. STACK - 
// 1. LIMITED MEMORY SPACE 
// 2. STATIC MEMORY ALLOCATION IS DONE THROUGH STACK SPACE 
// 3. LOCAL VARIABLES, FUNCTIONS USE MEMORY FROM STACK 

// C. GLOBAL/STATIC - 
// 1. HERE ARE ALL GLOBAL VARIABLES ARE STORED 


// D. CODE/TEXT - 
// 1. HERE THE PROGRAM INSTRUCTIONS ARE STORED 


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 1;
    int *ptr = NULL;
    
    printf("Memory Leak Demo \n");
    while(num<50){
        
        ptr = (int*) malloc(4000*sizeof(int));          // Here we are allocating memory adn not freeing it so in every loop the pointer will point to new memory address leading to more memory consumption
        printf("%p", ptr);                              // Every time we allocate memory it is pointing to new location and the old location is still consuming memory this causes memory leak 
        printf("To continue press 1\n");
        scanf("%d", &num);
        //free(ptr);
        
    }

    return 0;
}

