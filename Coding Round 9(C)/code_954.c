// PROGRAM TO 1 TO N natural Numbers using recursion

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int display1ton(int);

int main()
{

    display1ton(10);
    return 0;
}

int display1ton(int n)
{

    if (n > 0)
    {
        display1ton(n - 1);
        printf("%d", n);
    }
}