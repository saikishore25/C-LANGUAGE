// Q34. Program to input marks of 5 students and calculate sum and average (Arrays & Loops)

#include<stdio.h>

     int main(){
     int marks[5];
     int sum =0;
     printf("Enter the marks of students \n");

     for(int i=0; i<5; i++){
        scanf("%d \n", &marks[i]);
        sum = sum + marks[i];
     }

     printf("%d \n", sum);
     int average = (sum)/5;
     printf("%d \n", average);



     return 0;
}