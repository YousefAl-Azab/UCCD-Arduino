#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float avg,x ,sum;
    sum = 0;
    for (i=0;i<10;i++){
        printf("enter number %d :",i);
        scanf(" %f",&x);
        sum=sum+x;

    }
    avg=sum/10;
    printf("the sum is %f\n",sum);
    printf("the average is %f",avg);
}
