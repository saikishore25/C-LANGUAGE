// Program to Implement Direct and Indirect Recursion 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 

int direct(int);        // DIRECT RECURSION WHERE THE FUNCTION CALLS ITSELF FROM ITS OWN FUNCTION DEFINITION 
int indirect(int );      // INDIRECT RECURSION WEHRE THE FUNCTION GETS CALLED FROM ANOTHER FUNCTION 
int indirectexplain(int);

    int main(){

        direct(5);
        int fact = indirect(5);
        printf("%d", fact);
    return 0;
}


int direct(int n){

    if(n<1){
        return 1;
    }
    else{

        printf("%d", n);
        direct(n-1);

    }
}

int indirect(int n){

    if(n<=1){
        
        return 1;
    }
    else{

        return n*indirectexplain(n-1);
    }

    
}

int indirectexplain(int n){

    if(n<=1){

        return 1;
    }

    else{

        return n*direct(n-1);
    }
}