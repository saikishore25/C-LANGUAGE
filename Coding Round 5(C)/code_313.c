// Porgram to explain Pointer Subtraction 

#include<stdio.h>

     int main(){
     int d;
     int a = 10;
     int b = 20;
     int *p = &a;
     int *q = &b;
     printf("%u \n", p);
     printf("%u \n", q);
     d = p-q;           // Pointer subtraction can be done using another pointer unlike addition of pointers its diffrenet 

     printf("%d \n", d);
     d = p-2;           // We can even subtract constant from pointers 
     printf("%d \n", d);

     

     return 0;
}