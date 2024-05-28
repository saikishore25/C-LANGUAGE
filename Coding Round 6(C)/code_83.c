#include<stdio.h>
#include<conio.h>

struct first{
     int a,b,c;
     float x;
     char d;

};

      int main(){

          struct first s;
          // struct first s1;
          // // s1.a = 5;
          // // s1.b = 6;
          // // s1.c = 7;
          // // s1.x = 5.90123;

          
          // printf("%d \n", s.a);
          // printf("%f \n", s.x);
          // printf("%c \n", s.d);
          // // printf("%d \n", s);

          // s1=s;

          // printf("\n%d %d %d \n", s1.a, s1.b, s1.c);
          // printf("%f \n", s1.x);

          struct first c;
          printf("Enter the elements of Structure \n");
          scanf("%d %d %d \n", &s.a, &s.b, &s.c); 
          printf("%d %d %d \n", s.a, s.b, s.c);        
          
      
      return 0;
}