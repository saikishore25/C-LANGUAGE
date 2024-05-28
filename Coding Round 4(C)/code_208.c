// Program to print the first letters of each word from the entered string 

#include <stdio.h>

int main()
{
    int i=0;
    char str1[20];
    printf("Enter the string below \n");
    gets(str1);
    printf("%c", str1[0]);
    
    while(str1[i]!='\0'){
        
        if(str1[i] == ' '){
            
            i++;
            printf("%c", str1[i]);
        }
        
        i++;
    }

    return 0;
}
