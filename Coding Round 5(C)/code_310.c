// Program to understand Double Pointer.

#include<stdio.h>

     int main(){
     int a = 10;          // int is the data type 
     int *ptr = &a;       // Pointer is a derived Data type and is represented by (DATATYPE* VARIABLE NAME)
     int **x = &ptr;      // x is a double Pointer which is storing the address of ptr
     **x =  50;               // Changing the value of a variable using pointers.
     printf("%d \n", a );

     return 0;
}