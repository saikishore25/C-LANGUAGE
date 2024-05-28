// C program to explain FORMATTED AND UNFORMATTED INPUT FUNCTIONS IN FILES.
// Reading From A File (READ MODE)
// FILE EXISTS - OPENS THE FILE 
// FILE DOESNT EXIST - DOESNT CREATE NEW FILE 

#include<stdio.h>
#include<stdlib.h>

     int main(){
     FILE* ptr1;
     ptr1 = fopen("NEW.txt", "r" );

     if(ptr1 == NULL){
          printf("ERROR!!! No File Found");
          exit(1);               // This function is present is STDLIB FUNCTION.
     }

     char ch;
     // ch = fgetc(ptr1);
     // printf("%c ", ch);             // FEOF function which gives true when it is end of file and false when it is not the end of file.

     // while(!feof(ptr1)){

     //      ch = fgetc(ptr1);
     //      printf("%c", ch);
     // }

     // while(!feof(ptr1)){
     //      char str1[20];
     //      fgets(str1, 10, ptr1);          // READS ONLY TILL THE END OF A SINGLE LINE 
     //      printf("%s", str1);
     // }

     char strrr[15];
     fscanf(ptr1, "%s", strrr);              // READS ONLY TILL THE END OF A SINGLE LINE 
     printf("%s", strrr);

     // fclose(ptr1);

     // char chr;

     // chr = fgetc(ptr1);
     // printf("%c", chr);



     return 0;
}