#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter the number to show it's table :");
    scanf(" %d",&x);
    int c=1;
    while(c<=x){
        printf(" %d X %d = %d \n",x,c,x*c);
        c++;
    }
}
