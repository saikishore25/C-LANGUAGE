// Q19. Program to grade students according to their marks. 

#include<stdio.h>
#include<conio.h>
     int main(){
        int a;
        printf("Enter the marks he scored \n");
        scanf("%d \n", &a);
     
     if(a>35){

        if(a>35 && a<=50){
            printf("The grade obtained is D \n");
        }
        else if(a>50 && a<=70){
            printf("The grade obtained is C \n");
        }
        else if(a>70 && a<=85){
            printf("The grade obtained is B \n");

        }

        else{
            printf("The grade obtained is A \n");
        }


     }

     else{
        printf("The student failed to obtain the passing marks \n");
     }
     return 0;
}