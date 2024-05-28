// Program to implement strcmp() function 

#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(){
    
    char str1[10] = "PMEC";
    char str2[10] = "MREC";
    
    if(strcmp(str1, str2)==0){
        
        printf("Both the strings are same \n");
    }
    
    else if(strcmp(str1, str2)>0){
        
        printf("String 1 is greater than string 2 \n");
        printf("%d \n", strcmp(str1,str2));
    }
    
    else{
        
        printf("String 1 is lesser than string 2 \n");
        printf("%d \n", strcmp(str1,str2));
    }
    
    
    
    return 0;
}