// Q39. Program to check whether the given input is alphabet, integer or special character.


#include<stdio.h>

     int main(){
     char ch;
     printf("Input your value: \n");
     scanf("%d \n", &ch);
     if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
        printf("This is an alphabet \n");
     }

     else if(ch>='0' && ch<='9'){
        printf("This is a digit \n");

     }

     else{
        printf("This is a special character \n");
     }
     return 0;
}