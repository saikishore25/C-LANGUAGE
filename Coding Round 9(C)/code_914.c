// PROGRAM TO RETURN A CHARACTER ARRAY/ STRING FROM A FUNCTION 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 

int strtofunc(char [], char[]);

int main(){
     
     char string1[20];
     puts("Enter the String1 Below");
     scanf("%s", &string1);

     char string2[20];
     puts("Enter the String2 Below");
     scanf("%s", &string2);

    strtofunc(string1, string2);
        
return 0;
}


int strtofunc(char str1[], char str2[]){

    int length1 = 0;
    for(int i=0; str1[i]!='\0'; i++){

        length1++;

    }

    printf("The Lenght of First String is %d", length1);

    int length2 = 0;
    for(int i=0; str1[i]!='\0'; i++){

        length2++;

    }

    printf("The Length of Second String is %d", length2);

}