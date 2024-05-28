// PROGRAM TO CREATE A USER DEFINED FUNCTION TO GENERATE A LINE.

#include<stdio.h>
#include<conio.h>

void printline(int );

int main(){

    printline(5);

    return 0;

}

void printline(int n){

    for(int i=0; i<n; i++){

        printf("___________________________________________________________________________ \n");
            
    }

}