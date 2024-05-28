// Program to Print the Vowels Out of Enteered String 

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30];
    puts("Enter the string below");
    scanf("%s", str1);
    
    int len1 = strlen(str1);
    
    char vowel[20] = "aeiouAEIOU";
    
    int len2 = strlen(vowel);
    
    for(int i=0; i<len1; i++){
        
        for(int j=0; j<len2; j++){
            
            if(str1[i]==vowel[j]){
                
                str1[i] = ' ';
                
            }
            
            
        }
    }
    
    puts(str1);
    
    

    return 0;
}
