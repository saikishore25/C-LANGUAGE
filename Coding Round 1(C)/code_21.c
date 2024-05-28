// Program to check whether entered character is a consonant or a vowel.

#include<stdio.h>
#include<conio.h>


int main(){

    char ch;
    printf("Enter the character below \n");
    scanf("%c", &ch);

    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')){

        printf("The Entered Character is a Vowel \n");

    }

    else{

        printf("The Entered Character is a Consonant \n");
    }

    return 0;
}