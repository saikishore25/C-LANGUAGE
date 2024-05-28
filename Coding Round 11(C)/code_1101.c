// Program to implement file handling in C.
// Formatted and unformatted OUTPUT  FUNCTIONS.
// Writing Into A File (WRITE MODE) 
// FILE EXISTS - OPENS THE FILE 
// FILE DOESNT EXIST - CREATES NEW FILE 

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

    FILE* ptr1;
    // char ch = 'A';
    // char str[25] = "MAKAM SAI KISHORE";
    int a = 10;
    float b = 71.23019;
    char str1[25] = "KISHORE";          // VARIABLES CAN BE DECLARED ANY WHERE IN THE PROGRAM, WHETHER IT IS INSIDE THE FILE OR OUTSIDE THE FILE
    char str2[20];
    int c;
    int d;

    ptr1 = fopen("ABC.txt", "w");
    

    // fputc(ch, ptr1);
    // fputs(str, ptr1);

    fputc('A', ptr1);
    fputs("MAKAM SAI KISHORE", ptr1);

    fprintf(ptr1,"%d %s %f", a, str1, b);
    fprintf(ptr1, "Hey Its Working");

    printf("Enter the string below \n");
    gets(str2);

    fprintf(ptr1, "%s", str2);
    // printf("%s \n", str2);      // IF WE USE GENERAL PRINTF AND SCANF IN FILE IT WILL BE PRINTED ONTO TERMINAL NOT ONTO FILE.

    char strr[20] = "MREC"; 
    for(int i=0; i<strlen(strr); i++){

        fputc(strr[i], ptr1);
    }
    

    fclose(ptr1);


    return 0;
}