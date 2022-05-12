#include<stdio.h>

int search(int arr[],int s,int low ,int high);

void main()
{
    int arr[10] ,x,s,res,i,j,k;
    for (i = 0;i < 10;i++){
        printf("Enter Arrays data %d=",i);
        scanf(" %d",&arr[i]);
    }
    for (k = 0;k < 10; k++){
        for(j = 1; j <= 9; j++){
            if (arr[j-1] > arr[j]){
            x = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = x;
            }
        }

    }
    printf("Enter the search number = ");
    scanf(" %d",&s);
    res = search(arr,s,0 ,9);
    if (res != -1)
    {
        printf("number Found");
    }
    else if (res == -1)
    {
        printf("number not found");
    }

}

int search(int arr[],int s,int low ,int high)
{
    int mid;
    mid = low + (high - low) / 2;
    if (low > high){
        return -1;
    }
    else if (arr[mid] == s ){
        return mid;
    }
    else if (arr[mid] > s){
        return search(arr,s, low ,mid - 1);
    }
    else if (arr[mid] < s){
        return search(arr,s,mid + 1 ,high);
    }
}
