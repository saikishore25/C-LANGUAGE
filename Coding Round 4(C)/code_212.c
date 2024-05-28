// Program to implement strncpy() Function 

#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){
    
    
    char str1[10] = "KMIT";
    char str2[10] = "KMEC";
    
    strcpy(str2, str1);
    
    printf("%s", str2);
    // str2[10] = "KMEC";
    // printf("%s", str2);
}

// strncpy() also works similary 