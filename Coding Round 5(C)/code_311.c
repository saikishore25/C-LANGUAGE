// Program to explain POINTER ARITHMETIC SYSTEM 
// 

#include<stdio.h>

     int main(){
     int a = 10;
     int *p = &a;
     int **x = &p;
     int ***y = &x;            // Y is a triple pointer storing the address of double pointer.
     printf("The Data present in a is %d \n", a);
     printf("The Address of a is %u \n", &a);
     printf("The Data present in p is %d \n", p);
     printf("The Data present in a is %d \n", *p);
     p = p + 5;                     // Addition of a constant to pointer. 
     printf("The Data present in p is %d \n", p);
     printf("The variable data which the pointer is pointing is %d \n", *p); // GARBAGE VALUE
     

     return 0;
}