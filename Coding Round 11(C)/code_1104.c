// Program to implement read and write mode 
// (READ AND WRITE MODE)
// FILE EXISTS - OPENS THE FILE 
// FILE DOESNT EXIST - DOESNT CREATE NEW FILE 
// IF FILE EXISTS IT APPENDS THE NEXT ENTERED TEXT AT THE END

#include<Stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

    FILE *ptr;

    ptr = fopen("KBC.txt", "r+");

    if(ptr == NULL){

        printf("File Not Found");
        exit(1);
    }

    // Reading from File 

    char str1[30];
    while(!feof(ptr)){
        fgets(str1,10,ptr );
        printf("%s", str1);
    }


    // Writing into File 
    char str[10];
    printf("Enter the text You want to append \n");
    gets(str);
    // fputs(str, ptr);
    fputs(str, ptr);
    
    
    fclose(ptr);

    return 0;
}