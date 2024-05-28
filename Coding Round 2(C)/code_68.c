// Q26. Program to create a multiplication table using LOOPS.

#include<stdio.h>

     int main(){
     int a=1;
     int n;
     printf("Enter the table you want to print \n");
     scanf("%d \n", &n);

     while(a<=10){
        printf("%d * %d = %d \n",n, a, n*a);
        a++;  // a = a+1


     }
     return 0;
}