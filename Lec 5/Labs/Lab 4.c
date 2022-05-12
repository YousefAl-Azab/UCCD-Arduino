#include<stdio.h>

void main()
{
    int arr[10] ,s ,count = 0,x=0,i;
    for (i = 0;i<10;i++){
        printf("Enter Arrays data %d=",i);
        scanf(" %d",&arr[i]);
    }
    printf("Enter the search number = ");
    scanf(" %d",&s);

    while (x<10){
        if (arr[x] == s){
            count++;
        }

        x++;
    }
    if (count == 0){
        printf("number doesn't exist");
    }
    else{
        printf("number exist %d times",count);
    }

}
