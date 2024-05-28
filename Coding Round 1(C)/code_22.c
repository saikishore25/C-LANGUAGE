// Program to enter marks of student and grade him accordingly 


#include<stdio.h>
#include<conio.h>

int main(){


    int maths;
    printf("Enter the marks secured in Maths: \n");
    scanf("%d", &maths);

    int science;
    printf("Enter the marks secured in Science: \n");
    scanf("%d", &science);

    int english;
    printf("Enter the marks secured in English: \n");
    scanf("%d", &english);

    int social;
    printf("Enter the marks secured in Social: \n");
    scanf("%d", &social);

    int telugu;
    printf("Enter the marks secured in Telugu: \n");
    scanf("%d", &telugu);

    int marks;
    marks = (maths + english + telugu + science + social);

    printf("Total marks obtained are %d \n",marks );

    if(marks>450){

        printf("A1 - Grade \n");
    }

    else if(marks>400){

        printf("A2 - Grade \n");
    }

    else if(marks>350){

        printf("B1 - Grade \n");
    }

    else if(marks>300){

        printf("B2 - Grade \n");
    }

    else if(marks>250){

        printf("C1 - Grade \n");
    }

    else if(marks>200){

        printf("C2 - Grade \n");
    }
}
