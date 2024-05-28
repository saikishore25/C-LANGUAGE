// Program to implement 
// 1. strlwr - Stringlower Function
// 2. strupr - Stringupper Function

#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){
    
    
    char str1[10] = "MALLAREDDY ENGINEERING COLLEGE \n";
    char str2[10] = "mallareddy engineering college \n";
    
    strlwr(str1);
    strupr(str2);
    
    puts(str1);
    puts(str2);
    
    
    return 0;
}