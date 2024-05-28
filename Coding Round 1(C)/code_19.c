// Program to classify triangles based on their dimensions into equilateral, isosceles, scalene

#include<stdio.h>
#include<conio.h>

int main(){

    int side1, side2, side3;
    printf("Enter the values of sides below: \n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if(((side1+side2)>side3) && ((side2+side3)>side1) && ((side3+side1)>side2)){

        printf("It is valid Triangle \n");

        if(side1==side2 && side2==side3){
            
            printf("It is an EQUILATERAL triangle \n");
        }

        else if(side1!=side2 && side2!=side3){

            printf("It is a SCALENE triangle \n");
        }

        else{

            printf("It is an ISOSCELES triangle \n");
        }
    }

    else{

        printf("It is not valid Triangle \n");
    }

    return 0;
}