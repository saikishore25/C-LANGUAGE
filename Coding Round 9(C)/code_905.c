// Q76. Program to print namasthe and bonjour accordingly.

#include<stdio.h>

// void com();


     int main(){
     
     com();
     return 0;
}

void com(){
    char lang;
    printf("Enter the language You Speak \n");
    scanf("%c \n", &lang);
    if(lang == 'E'){
        printf("Namasthe \n");
    }
    else if(lang == 'F'){
        printf("Bonjour");
    }
    else{
        printf("Language not recognised \n");
    }


}