// Program to implement strlen() function in c 

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    
    char str1[50] = {'A','B','C',' ','\0'};
    int length = strlen(str1);
    printf("%d", length);
    
    
    return 0;
}