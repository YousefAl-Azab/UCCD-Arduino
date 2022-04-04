#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter number 1 :");
    scanf(" %d",&a);
    printf("enter number 2 :");
    scanf(" %d",&b);
    printf("enter number 3 :");
    scanf(" %d",&c);
    if(a > b){
        if(a > c){
            printf("Maximum number is %d",a);
        }
        else{
            printf("Maximum number is %d",c);
        }
    }
    else {
        if(b > c){
            printf("Maximum number is %d",b);
        }
        else{
            printf("Maximum number is %d",c);
        }
    }
}
