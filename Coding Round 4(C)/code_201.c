// Program to Concatinate Two Strings using Pre Defined Function

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    char str1[20];
    gets(str1);
    
    char str2[20];
    gets(str2);

    strcat(str1,str2);

    puts(str1);

}