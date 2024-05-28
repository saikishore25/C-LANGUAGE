// Program to intitialize POINTER TO STRUCTURE.

 #include<stdio.h>


 struct sec{
    int a, b;
    float c;
 };
 
     int main(){
        // struct sec s1;
        // printf("%u \n", &s1);    // The base address of the first member of the structure is stored as the base address of the complete structure.
        // printf("%u \n", &s1.a);


        struct sec s1={1,2,3.456};
        struct sec *x = &s1;
        printf("%d %d %f \n", x->a, x->b, x->c);   
         
     
     return 0;
 }


