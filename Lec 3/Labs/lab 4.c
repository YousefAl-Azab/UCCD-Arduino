#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ans;
   printf("enter the answer of 5 x 5 =");
   scanf(" %d",&ans);
   while (ans != 25){
    printf("Wrong amswer Try again =");
    scanf(" %d",&ans);
   }
    printf("Thats Right");
}
