// Program to Select Your Lnguage and Communicate

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){


    char lang[10];
    printf("Enter Your Language to Communicate \n");
    gets(lang);

    if(!(strcmp(lang,"english"))){

        printf("Hello Kishore");

    }

    else if(!(strcmp(lang,"french"))){

        printf("Bonjour Kishore");

    }

    else if(!(strcmp(lang,"hindi"))){

        printf("Namaste Kishore");

    }

    else if(!(strcmp(lang,"telugu"))){

        printf("Namaskaram Kishore");

    }
    
    else if(!(strcmp(lang,"spanish"))){

        printf("Hola Kishore");

    }

    else if(!(strcmp(lang,"portugese"))){

        printf("Ciao Kishore");

    }

    else{

        printf("Limit Exceeded");
    }
}
