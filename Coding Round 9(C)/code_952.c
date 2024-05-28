// PROGRAM TO PRINT THE SUM OF THE ENTERED NUMBER (5 = 1+2+3+4+5) USING RECURSIVE FUNCTION 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 
int sum(int);

    int main(){

        int summation = sum(5);
        printf("The Sum is : %d", summation);
     
    return 0;
}

int sum(int n){

    int summ = 0; 

    if(n==1){

        return 1;
    }

    else{

        summ = n + sum(n-1);
        return summ;

    }
}