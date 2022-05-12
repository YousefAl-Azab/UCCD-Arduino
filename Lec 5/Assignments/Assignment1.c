#include<stdio.h>

void main()
{
    int arr[10],max,min,i,j,k;
    for (i = 0;i < 10;i++){
        printf("Enter Arrays data %d=",i);
        scanf(" %d",&arr[i]);
    }
    max = arr[0];
    for (j = 1; j < 10; j++){
        if (max < arr[j]){
            max = arr[j];
        }
    }
    min = arr[0];
    for (k = 1;k < 10; k++){
        if (min > arr[k]){
            min = arr[k];
        }
    }
    printf("maximum number is = %d\n",max);
    printf("minimum number is = %d\n",min);

}
