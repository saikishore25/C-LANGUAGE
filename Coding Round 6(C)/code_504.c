// Program to how to implement structure padding 

#include <stdio.h>
#pragma pack(1)             // This PRE PROCESSOR DIRECTIVE does the structure packing by itself and giving the required memory 
                            //  Which obviously decreases the PROCESSOR speed and increases memory efficiency.

struct tag1{
    
    char a;
    int b;       
    char c;
};

int main()
{
    struct tag1 S1;
    printf("%ld \n", sizeof(S1));          // In modern computer systems Compiler automatically does structure padding in C.
                                            // But if we dont want structure padding/ dont want to waste that extra padding bytes we do structure packing
                                            // Structure 

    return 0;
}
