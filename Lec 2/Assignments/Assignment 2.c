#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,i;
    printf("Please enter your ID :");
    scanf(" %d",&x);
    switch(x){
case 1234:
    printf("Enter the password :");
    scanf(" %d",&y);
    if(y==7788){
        printf("Welcome Ahmed");
    }
    else {

            printf("Incorrect password no more tries");

    }
    break;
    case 5678:
    printf("Enter the password :");
    scanf(" %d",&y);
    if(y==5566){
        printf("Welcome Amr");
    }
    else {

            printf("Incorrect password no more tries");

    }
    break;
    case 9870:
    printf("Enter the password :");
    scanf(" %d",&y);
    if(y==1122){
        printf("Welcome Wael");
    }
    else {

            printf("Incorrect password no more tries");

    }
    break;


    default:
        printf("wrong ID");
        break;
    }
}
