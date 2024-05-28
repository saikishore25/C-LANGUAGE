// Q3. Program to show some basic concepts related to operators.


#include<stdio.h> 
#include<conio.h>


     int main(){
       
        int a = 54;
        int x = ++a;
       
        printf("%d \n", a);
        printf("%d \n", x);        // Increment and Decrement Operator.
        int c = 45;
        int y = c++;
        printf("%d \n", c);
        printf("%d \n", y);
        

        int k = 45;
        k %= 4;
        


        printf("%d \n", k);


     return 0;
}