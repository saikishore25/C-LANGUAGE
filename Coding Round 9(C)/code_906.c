#include<stdio.h>
#include<conio.h>

struct con
{
    int a; 
    int b; 
    float c;
    
};


int main(){
    struct  con ci ;
    printf("Enter the element in a \n");
    scanf("%d \n", &ci.a);

    printf("Enter the element in b \n");
    scanf("%d \n", &ci.b);

    printf("Enter the element in c \n");
    scanf("%f \n", &ci.c);

    printf("%d %d %f \n", ci.a, ci.b, ci.c);
    

    struct con ki;
    
    
}