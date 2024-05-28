// Program to implement Patterns in C 
// 1
/*
start - end series 
*/


#include<stdio.h>
#include<conio.h>

int main(){

    int start;
    printf("Enter the Number of start Required\n");
    scanf("%d", &start);
    printf("%d\n", start);

    int end;
    printf("Enter the Number of end Required\n");
    scanf("%d", &end);
    printf("%d \n", end);
    


    for(int i=start; i<end; i++){

        printf(i);


    }


return 0;
}