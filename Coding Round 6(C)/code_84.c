// Program to initialize ARRAY OF STRUCTURES.



#include<stdio.h>



struct first{
    int a,b,c;
    float d;
    char x;

};

     int main(){
        struct first s[5];
        printf("Enter the Data below: \n");
        for(int i=0; i<5; i++){
            scanf("%d %d %d %f %c \n", &s[i].a, &s[i].b, &s[i].c, &s[i].d, &s[i].x);
        }

        for(int i=0; i<5; i++){
            printf("%d %d %d %f %c \n", s[i].a, s[i].b, s[i].c, s[i].d, s[i].x);
        }


     

     return 0;
}