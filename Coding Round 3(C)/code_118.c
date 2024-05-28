// Q45. Program to print the number of elements in an unknown array.



#include<stdio.h>

     int main(){
     int a[] = {1, 2, 4, 5, 20, 34, 50, 6, 7, 4, 5, 7, 8};
     printf("%d \n", sizeof(a)/sizeof(a[0]));
     return 0;
}


// sizeof() function gives the complete size of an array/ int or float in bytes. 
// IF we divide the whole size by the size of single element size we get the count of elements
