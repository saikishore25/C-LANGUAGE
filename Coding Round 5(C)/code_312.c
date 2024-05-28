#include<stdio.h>

     int main(){
    //    int c = 6; 
    //    int *k = &c;
       int a[5] = {5,4,3,2,1};
    //    int *p = &a;  Cannot initialize the complete integer array within the pointer.
       int *p = &a[0];
       printf("%d \n", *p);
       printf("%u \n", p);
       p++;             // INCREMENT OPERATOR IN POINTERS. p = p +1
       printf("%u \n", p);
    //    p = p + c;      // Pointer addition can only be done with integer constant and not with other variable.
    //    p = p + k;      // This wil give an error
       printf("%u \n", p);
       printf("%d \n", *p); // Will print any GARBAGE VALUE AS WE DONT KNOW WHAT IS THERE IS THAT ADDRESS.


     return 0;
}