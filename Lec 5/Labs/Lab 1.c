#include<stdio.h>

void main()
{
    int arr[10],i;
    for (i = 0;i<10;i++){
        printf("Enter Arrays data %d = ",i);
        scanf(" %d",&arr[i]);
    }
    for (int j = 9;j >= 0;j--){
        printf(" %d \n",arr[j]);
    }
}
