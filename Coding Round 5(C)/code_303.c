// Program to check the greatest of two numbers using pointer variables


#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a below \n");
    scanf("%d", &a);
    
    int b;
    printf("Enter the value of b below \n");
    scanf("%d", &b);
    
    int* ptr1 = &a;
    int* ptr2 = &b;
    
    
    if(*ptr1>*ptr2){
        
        printf("a is greater than b \n");
        
    }
    
    else{
        
        printf("b is greater than a \n");
    }
    

    return 0;
}

