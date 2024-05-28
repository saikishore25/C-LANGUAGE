// Program to find the length of string using pre defined function

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    char str1[20];
    gets(str1);
    puts(str1);

    int length1 = strlen(str1);
    printf("The Length of String is %d", length1);


    return 0;
}