// Program to Find the length of string manually 


#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    char str1[20];
    gets(str1);

    int length = 0;
    int i;

    for(i=0; str1[i]!='\0'; i++){

        length++;
    }

    printf("The Length of the String is %d \n", i);
    // or
    // printf("The Length of the string is %d \n", length);

    return 0;
}