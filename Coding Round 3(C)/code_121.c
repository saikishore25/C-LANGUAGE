// Q35. Program to input 10 integers and count total number of even and odd elements.

#include<stdio.h>

     int main(){
     int a[10];
     int even=0, odd = 0;
     printf("Enter the integers \n");
     for(int i=0; i<10; i++){
     scanf("%d \n", &a[i]);
     }

     for(int i=0; i<10; i++){
        if(a[i]%2 ==0){
            even++;             // even = even + 1
        }

        else{
            odd++;              // odd = odd + 1
        }
     }

     printf("The number of even numbers is %d \n", even);
     printf("The number of odd numbers is %d \n", odd);



     return 0;
}