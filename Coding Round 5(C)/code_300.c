// Program to declare and initialize POINTERS.
// & - address of operator / Referencing Operator
// * - value at address of operator / Indirection Operator / Dereferencing Operator

#include<stdio.h>

     int main(){

//      int a=10;
//      int *ptr = &a;     // One Way

//     // int a, *ptr = &a;  // Second Way

//     //  int a = 10;
//     //  int *ptr;           // Third Way
//     //  ptr = &a;
     
//      char d = 'A';
//      char *p = &d;
     
     
//      printf("The Data present in a is %d \n", a);
//      printf("The Address of a is %u \n", &a);
//      printf("The Address of a is %x \n", &a);    // %x is used to print HEXA DECIMAL VALUES.
//      printf("The Address of a is %d \n", &a);
//      printf("The Data present in ptr is %d \n", ptr);
//      printf("The Address of ptr is %u \n", &ptr);
//      printf("The Data present in a is %d \n", *ptr);
//      printf("The Data present in ptr is %d \n", *(&ptr));
//      printf("%d \n", sizeof(ptr));
//      printf("%d \n", sizeof(p));   // The size of a pointer variable is always 4BYTES even if it is of any data type.
//     //  printf("%d \n", *a); We cant give the * operator to a normal data type 
     

     int a = 145689;
     printf("%d \n", a);
     printf("10%d \n", a); // Width is specified deafult is right justified
     printf("%-10d \n", a);  // width is specified we changed to left justified by putting '-' symbol.
     printf("%010d \n", a);  // The gaps left in the width are filled with zeroes.

     float c = 3.147398;
     float d = 4567.899;
     printf("%.3f \n", c);     // .3 denotes the number of decimal places to be printed.
     printf("%10.3f \n", c);   // 10.3 denotes 10 as the width and 3 decimal places to be printed.
     printf("%-10.3f \n", c);   // Width is left justified 
     printf("%5.2f \n", d);



     return 0;
}