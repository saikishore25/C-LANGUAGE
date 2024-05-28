//Program to show how structure padding is responsible for size of structure  

#include <stdio.h>

struct abc{
    
    char a;
    int c;
    // char b;
    
};

int main()
{
    struct abc var1;
    printf("%d \n", sizeof(var1));   // STRUCTURE PADDING COMES INTO PLAY 
                                    // Here the CPU is a word addressable one it access 4 bytes in once cycle
                                    
                                    // The number of cycles required by CPU to access a single variable at instant time should be as minimum as possible to
                                    // increase the proccessing speed of the CPU. For this to happen Compiler automatically leaves some memmory in between which are 
                                    // called as padding bytes . Nowadays the CPU is a word addressable and not byte addressable .
                                    // Word addressable means it can access (4 bytes if 32 bit cpu and 8 bytes if 64 bit cpu) in one CPU cycle
                                    // Byte addressable means it can access 1 byte in one CPU cycle.
                                    // The size of the structure depends on the order of the members  inside it.

    return 0;
}

