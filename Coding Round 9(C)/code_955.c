// PROGRAM TO N TO 1 natural Numbers using recursion

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
        printf("%d", n);
        display1ton(n - 1);
    }
}