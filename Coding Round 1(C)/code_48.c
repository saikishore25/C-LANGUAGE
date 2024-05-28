// Q41. Program to find the biggest number from n numbers. 

#include<stdio.h>
#include<conio.h>

     int main(){

        int i=0;
        int big=0;
        int arr[5];

        for(i=0; i<5; i++){
            scanf("%d \n", &arr[i]);
        }

        for(i=0; i<5; i++){

            if(big<arr[i]){
                big = arr[i];
            }
        }

        printf("The bigger number among the following is: %d \n", big);



     
     return 0;
}