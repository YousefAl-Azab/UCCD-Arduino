#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Please enter your ID :");
    scanf(" %d",&x);
    switch(x){
case 1142:
    printf("Enter the password :");
    scanf(" %d",&y);
    if(y==1111){
        printf("Welcome yousef");
    }
    else {
        printf("Incorrect password");
    }
    break;
    case 5678:
    printf("Enter the password :");
    scanf(" %d",&y);
    if(y==2222){
        printf("Welcome ahmed");
    }
    else {
        printf("Incorrect password");
    }
    break;
    case 1234:
    printf("Enter the password :");
    scanf(" %d",&y);
    if(y==3333){
        printf("Welcome mina");
    }
    else {
        printf("Incorrect password");
    }
    break;
    case 2030:
    printf("Enter the password :");
    scanf(" %d",&y);
    if(y==4444){
        printf("Welcome yasser");
    }
    else {
        printf("Incorrect password");
    }
    break;

    default:
        printf("incorrect ID");
        break;
    }
}
