// Program to Pass an Array(INTERNAL POINTER) as an Argument to a Function and find its sum 
// int, floats, chars - TAKE CALL BY VALUE AND STORE ONLY VALUE 
// int[], float[], char[] - TAKE CALL BY REFERENCE AND STORE ONLY ADDRESS AND ACT AS A POINTER VARIABLES 

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
 
int arrtofunc(int*, int);

int main(){


    int n;
    printf("Enter the Size of Array \n");
    scanf("%d", &n);

    int array[n];
    printf("Enter the Array Elements Below \n");

    for(int i=0; i<n; i++){

        scanf("%d", &array[i]);
    }

    int Sum_array = arrtofunc(array, n);

    printf("The Sum of The Array Elements are: %d", Sum_array);
     
        
    return 0;
}

int arrtofunc(int *a, int b){

    int sum = 0; 

    for(int j=0; j<b; j++){

        sum += *(a+j);
    }

    return sum;


}