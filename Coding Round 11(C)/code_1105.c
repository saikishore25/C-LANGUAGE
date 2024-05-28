// Program to implement read and write mode 
// (WRITE AND READ MODE)
// FILE EXISTS - OPENS THE FILE 
// FILE DOESNT EXIST -  CREATES NEW FILE
// IF FILE EXISTS IT WILL ERASE THE PREVIOUS CONTENTS  


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){

    FILE *ptr;

    ptr = fopen("OOPS.txt", "w+");


    // WRITING INTO A FILE 

    int a = 54; 
    fprintf(ptr,"%d", a);

    // READING FROM A FILE 
    rewind(ptr);        // AFTER WRITING SOMETHING ONTO THE FILE THE FILE POINTER STAYS AT THE END OF FILE AS A RESULT WE CANNOT READ ANYTHING FROM THE FILE 
    char str[20];       // THATS WHY WE USE rewind function which sets the file pointer at the beginning 
    while(!feof(ptr)){

        fgets(str, 10, ptr);
        printf("%s", str);
    }

    fclose(ptr);

    return 0;
}