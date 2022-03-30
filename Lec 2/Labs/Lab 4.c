#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
   printf("enter your grade :");
   scanf(" %d", &x)
   if (x<50){
    printf("FAILED");
   }
   else if (x<65){
    printf("NORMAL");
   }
   else if (x<75){
    printf("GOOD");
   }
   else if (x<85){
    printf("VERY GOOD");
   }
   else{
    printf("EXCELLENT");
   }
}
