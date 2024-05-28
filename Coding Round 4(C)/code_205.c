// Program to concatinate n characters from source string to destination string using pre defined function 

#include<stdio.h>
#include<conio.h>
#include<string.h>

    int main(){

    char str1[20];
    gets(str1);

    char str2[20];
    gets(str2);

    strncat(str1, str2, 3);      // 3 is the number of characters from beginning of the source string to be concatinated in the destination string.
    printf("The Concatinated String is %s \n", str1);
    


     
    return 0;
}