// Program to Print Fibonacci Series 

#include<stdio.h>
#include<conio.h>

int main(){

    int fib_num;
    printf("Enter the Number of digits you want in Fibonacci Series \n");
    scanf("%d", &fib_num);
    int n1, n2, n3;
    n1 = 0;
    n2 = 1;

    printf("%d \t", n1);
    printf("%d \t", n2);
    for(int i=3; i<=fib_num; i++){

        n3 = n1 + n2;
        printf("%d \t", n3);
        
        n1 = n2;
        n2 = n3;


    }

    return 0;
}