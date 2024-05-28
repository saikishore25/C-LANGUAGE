// Program to check whether a given character is upper case or lower case or numeric or special character

#include <stdio.h> 

int main() { 
    char ch; 
    printf("Enter the character below \n"); 
    scanf("%c \n", &ch); 

    if(ch>=65&&ch<=90){ 

        printf("Entered character is Upper Case\n"); 

        } 
    
    else if(ch>=97&&ch<=122){ 
        
        printf("Entered character is Lower Case \n"); 
        
        } 
        
    else if(ch>=48&&ch<=57){ 
        
        printf("Enter character is a numeric \n"); 
        
        } 
        
    else{ 
        
        printf("Entered character is a special symbol \n"); 
        
        } 
        
    return 0; 
    
    }
