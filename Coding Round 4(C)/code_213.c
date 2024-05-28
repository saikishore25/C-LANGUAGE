// Program to implement strcat()  and strncat() functions 

#include <stdio.h>
#include <conio.h>
#include <string.h>


int main()
{
    char str1[50] = "KISHORE";
    char str2[20] = "RAJESH";
    
    strcat(str1,str2);
    
    printf("\n");
    printf("%s \n", str1);
    

    return 0;
}


////////////////////////////////////////////////////////////////////////

/*
#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str1[50] = "KISHORE";
    char str2[20] = "RAJESH";
    
    strncat(str1,str2,3);
    
    printf("\n");
    printf("%s \n", str1);
    

    return 0;
}

*/

