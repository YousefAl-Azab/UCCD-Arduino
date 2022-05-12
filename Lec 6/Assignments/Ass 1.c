#include<stdio.h>
int N = 5 ;
int bubble (int *ptr);

void main()
{
    int arr[N];
    for (int i = 0;i < N;i++)
    {
        printf("Please Enter number %d:",i);
        scanf(" %d",&arr[i]);
    }
    bubble (arr);

}

int bubble (int *ptr){
    int  x;

    for (int i = 0; i < N; i++)
    {
        for (int j = 1; j <= (N-1); j++)
        {
            if (ptr[j-1] > ptr[j])
            {
            x = ptr[j-1];
            ptr[j-1] = ptr[j];
            ptr[j] = x;
            }
        }

    }
    for (int y = 0;y < N ;y++)
    {
        printf("%d\n",ptr[y]);
    }

}
