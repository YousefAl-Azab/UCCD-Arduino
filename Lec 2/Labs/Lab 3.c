#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
printf( "enter a number:" );
scanf(" %d" , &x );
y= x % 2;
if (y==0){
        printf("The number is EVEN");
}
else if (y!=0){
    printf("The number is ODD");
}
}
