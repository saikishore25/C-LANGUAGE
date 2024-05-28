// Program to check whether entered value is character or digit or special symbol

#include<stdio.h>
#include<conio.h>

int main(){


    char new;
    printf("Enter the value below \n");
    scanf("%c", &new);

    if((new>=65&&new<=90) || (new>=97&&new<=122)){

        printf("It is an Alphabet \n");
    }

    else if(new>=0&&new<=9){

        printf("It is a Digit \n");
    }

    else{

        printf("It is a Special Character \n");
    }
    
}