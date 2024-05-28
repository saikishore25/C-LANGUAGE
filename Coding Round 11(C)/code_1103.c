// Program to Write some more content into a file 
// (APPEND MODE)
// FILE EXISTS - OPENS THE FILE 
// FILE DOESNT EXIST - CREATES NEW FILE 

#include<Stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    FILE *ptr;

    ptr = fopen("NEW.txt", "a");

    if(ptr == NULL){

        printf("File Not Found");
        exit(1);
    }

    char str[10];
    printf("Enter the text You want to append \n");
    gets(str);
    // fputs(str, ptr);
    fprintf(ptr,"%s", str);
    
    fclose(ptr);

    return 0;
}