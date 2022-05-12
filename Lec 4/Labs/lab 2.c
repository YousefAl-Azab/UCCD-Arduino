#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
  printf("enter num 1 before swap :");
  scanf(" %d",&x) ;
  printf("enter num 2 before swap :\n");
  scanf(" %d",&y) ;
  x=x+y;
  y=x-y;
  x=x-y;
   printf("num 1 after swap : %d\n",x);
   printf("num 2 after swap : %d",y);
}
