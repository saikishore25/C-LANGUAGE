// Program to find the Sum and Average/Mean of an array using recursions 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 
float arrmean(int [], int );

    int main(){

        int array1[10] = {1,2,3,4,5,6,7,8,9,10};
        int size = sizeof(array1)/sizeof(int);
        arrmean(array1, size);
        

    return 0;
}

float arrmean(int a[], int n){

    int sum = 0;

    sum  = arrmean(a[n],n) + arrmean(a[n-1], n-1);

    float avg = sum/n;

    printf("%f", avg);


}