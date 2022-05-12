#include<stdio.h>

void main()
{
    int arr[10],sum=0,avg,i,j;
    for (i = 0;i<10;i++){
        printf("Enter Arrays data %d =",i);
        scanf(" %d",&arr[i]);
    }
    for (j = 0;j<10; j++){
        sum = sum + arr[j];
    }
    printf("The Sum of array = %d\n",sum);
    avg = sum / 10;
    printf("The Average of array = %d",avg);

}
