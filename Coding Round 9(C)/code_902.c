// Q72. Program to find the square and cube of a number. 

#include<stdio.h>

int sq(int);
int cb(int);


int main(){

   
    printf("%d %d \n", sq(5), cb(5));

    return 0;
}

int sq(int n){
    int c = n*n;
    return c;

}

int cb(int n){
    int c = n*n*n;
    return c;
}