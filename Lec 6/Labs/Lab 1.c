#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x = 10;
   int * ptr = &x ;

   printf("  x before : %d\n",x);

   *ptr=20;

   printf("  x after : %d",x);
}
