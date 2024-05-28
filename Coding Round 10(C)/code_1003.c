//3. realloc() - Re Allocation 
// In this we can reallocate memory according to our needs when we require more or less memory 



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    
    
    int n;
    printf("Enter the Number of terms below : \n");
    scanf("%d", &n);
    
    int *ptr = (int*) malloc(sizeof(int)*n);
    
    if(ptr==NULL){
        
        printf("Memory Allocation Failed!!!!");
    }
    printf("Enter the values below \n");
    
    for(int i=0; i<n; i++){
        
        scanf("%d", (ptr+i));
    }
    
    printf("The Entered values are: \n");
    
    for(int i=0; i<n; i++){
        
        
        printf("%d \n", *(ptr+i));
    }
    
    printf("Enter the updated number of terms: \n");
    scanf("%d", &n);
    
    
    int *ptr1 = (int*) realloc(ptr, n*sizeof(int));
    
    if(ptr1==NULL){
        
        printf("Memory Allocation Failed!!!!");
    }
    
    
    for(int i=0; i<n; i++){
        
        printf("%d", *(ptr+i));
    }
    
    
    free(ptr1);
    
    
    return 0;
}

