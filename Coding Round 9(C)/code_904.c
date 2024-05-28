// Q16. Program to print Good Mornig and Good Afternoon using functions.
// Direct and Indirect Calling of Functions.
#include<stdio.h>
#include<conio.h>

void GM();
void GN();
void GA();
     int main(){
        GM();
        
     
     return 0;
}

void GM(){
    printf("Good Morning \n");
    GN();
    GA();
}

void GN(){
    printf("Good Night \n");
}

void GA(){
    printf("Good Afternoon \n");
}