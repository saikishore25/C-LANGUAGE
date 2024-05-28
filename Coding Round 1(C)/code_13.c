// Program to Check whether it is a leap Year or not
/* 1. 2012 2016 2020 - all are leap years becoz they are divisible by 4 
   2. 1200 1600 2000 - all these century years are leap years becoz they are divisible by 400
   3. 2100 2200 2300 - all these century years are not leap years even though they are divisble by 4 but not divisble by 400. 

   so for a year to be leap year it definetly needs to be divisble by 4 and century year shld be divisble by 400 and not by 100

*/


#include<stdio.h>

    int main(){
     
        int year;
        printf("Enter the Year Below \n");
        scanf("%d", &year);

        if(year%400==0 || year%4==0 && year%100!=0){        

            printf("It is a Leap Year \n");
        }

        else{

            printf("It is not a Leap Year \n");
        }

    return 0;
}