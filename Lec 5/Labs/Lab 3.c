#include<stdio.h>

void main()
{
    int arr[10] , temp,i,j,k,l;
    for (i = 0;i<10;i++){
        printf("Enter Arrays data %d=",i);
        scanf(" %d",&arr[i]);
    }
    for (k = 0;k<10; k++){
        for (j = 1;j<=9; j++){
            if (arr[j-1] > arr[j]){
            temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            }
        }

    }
    for ( l= 0;l<10;l++){
        printf("%d\n",arr[l]);
    }

}
