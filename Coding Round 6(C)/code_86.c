#include<stdio.h>


union first{
    
    int a,b;
    float c;    // The data type which has the highest memory requirement will be allocated to the total memory requirement of the union.
    char d;
    double e;
    
};

     int main(){
        
        union first s1;

        printf("%d \n", sizeof(s1));
        
     
     return 0;
}