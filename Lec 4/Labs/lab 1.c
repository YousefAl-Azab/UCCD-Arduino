#include <stdio.h>
#include <stdlib.h>

int Get_Max (int x, int y);

int main()
{
    int x,y;
    printf("enter num1 :");
    scanf(" %d",&x);
    printf("enter num2 :");
    scanf(" %d",&y);
   printf("the maximum is %d",Get_Max(x,y));
}

int Get_Max (int x, int y){
    int res;

if (x>y){
    res=x;
}
else if(y>x){
    res=y;
}

return res ;
}
