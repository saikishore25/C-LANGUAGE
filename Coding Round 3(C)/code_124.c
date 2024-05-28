// Q40. Program to read two arrays and store sum of the respective indices in the third array.


#include<stdio.h>

     int main(){
     int arr1[5];
     int arr2[5];
     int sum_arr[5];

     for(int i=0; i<5; i++){
        scanf("%d \n", &arr1[i]);
        scanf("%d \n", &arr2[i]);
     }

     for(int i=0; i<5; i++){
         sum_arr[i] = arr1[i] + arr2[i];
     }

     for(int i = 0; i<5; i++){
        printf("The element arr1[%d] is %d \n",i, arr1[i]);
        printf("The element arr2[%d] is %d \n", i, arr2[i]);
        printf("The element sum_arr[%d] is %d \n", i, sum_arr[i]);
     }

     return 0;
}