// Program to insert a Substring to a main string at a given position 

#include <stdio.h>
#include <conio.h>

int main()
{
    char str1[35];
    puts("Enter the main string below");
    gets(str1);
    
    char str2[30];
    puts("Enter the substring below");
    gets(str2);
    
    int position;
    printf("Enter the position where you want to insert the substring \n");
    scanf("%d", &position);
    
    int l1, l2;
    l1 = strlen(str1);
    l2 = strlen(str2);
    
    // printf("%d %d", l1, l2);
    
    for(int i=l1; i>=position; i--){
        
        str1[i+l2] = str1[i];
        
    }
    
    
    for(int i=0; i<l2; i++){
        
        str1[position+i] = str2[i];
    }
    
    
    printf("The string after the procedure is %s", str1);

    return 0;
}
