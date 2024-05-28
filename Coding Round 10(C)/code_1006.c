// Program to Dynamically Allocate Memory to a Structure 

#include <stdio.h>
#include <stdlib.h>

struct tag1 {
    
    int a;
    float b;
    char c;
}s1;

int main()
{
    
    struct tag1* ptr;
    
    ptr = (struct tag1*)calloc(3, sizeof(struct tag1));
    
    ptr->a = 10;
    ptr->b = 3.145;
    ptr->c = 'A';
    
    printf("%d", ptr->a);
    printf("%f", ptr->b);
    printf("%c", ptr->c);
    
    
    
    

    return 0;
}

