// Create multiple functions to add, sub, mul, div two numbers. 
// Functions are classified as;
// A: No parameter No return Type.
#include<stdio.h>

void add(void);
void sub();
void mul();
void div();

int main(){
        add();
        sub();
        mul();
        div();


}

void add(){
    int a,b; 
    printf("Enter the values of a & b \n");
    scanf("%d %d \n", &a, &b);
    printf("The value is: %d \n", a+b);
    // int result = a+b;
    // return result;

}

void sub(){
    int a,b; 
    printf("Enter the values of a & b \n");
    scanf("%d %d \n", &a, &b);
    printf("The value is: %d \n", a-b);
}
void mul(){
    int a,b; 
    printf("Enter the values of a & b \n");
    scanf("%d %d \n", &a, &b);
    printf("The value is: %d \n", a*b);
}
void div(){
    int a,b; 
    printf("Enter the values of a & b \n");
    scanf("%d %d \n", &a, &b);
    printf("The value is: %d \n", a/b);
}