// Q25. Program to find the sum of first 10 natural numbers.

#include<stdio.h>

     int main(){
     int a = 1;
     int sum = 0;

     while(a<=10){
        
        sum = sum + a;
        printf("%d \t", a);
        a++;
     }

        printf(" \nThe Sum is : %d \n", sum);

     return 0;
}