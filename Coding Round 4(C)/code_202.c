// Program to Concatinate two strings Manually

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    char str1[20] = "Kishore";
    char str2[20] = "Kumar";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int i;

    for(i=0; i<len2; i++){

        str1[len1+i] = str2[i];
    }

    str2[i] = '\0';

    // printf("The Destination String: %s \n", str1);
    printf("The Source String: %s \n", str2);

    printf("The Concatinated String: %s", str1);


    return 0;
}