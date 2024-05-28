// Program to Showcase Nested Structure in C 

#include <stdio.h>

struct tag1
{

  int a;
  char b;
  float c;

  struct tag2
  {

    char d;
    int e;
  };

};


int
main ()
{
//   struct tag1 OUTER;
//   struct tag2 INNER;
//   OUTER.a = 54;
//   OUTER.b = 'A';
//   OUTER.c = 3.145;
//   OUTER.INNER.d = 'B';
//   OUTER.INNER.e = 50;


//   struct tag1 OUTER = {54, 'A',30145, 'B', 50};             Not working in this way

  printf ("%d %c %f %c %d \n", OUTER.a, OUTER.b, OUTER.c, OUTER.INNER.d, OUTER.INNER.e);
  
  
  return 0;
}
