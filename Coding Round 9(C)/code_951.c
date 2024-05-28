// PROGRAM TO EXPLAIN RECURSIONS IN C 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 
int display(int );


    int main(){

        display(3);
     
    return 0;
}


int display(int n){

    if(n<1){

        return 1;
    }

    else{

        printf("%d", n);
        display(n-1);
        printf("%d", n);
    }
}