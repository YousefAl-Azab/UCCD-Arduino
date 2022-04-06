#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,fact=1;
    printf("Enter the integer :");
    scanf(" %d",&x);
    int c=1;
    while(c<=x){
        fact=fact*c;
        c++;
    }
    printf("Factorial = %d",fact);
}
