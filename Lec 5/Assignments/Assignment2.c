#include<stdio.h>

void main()
{
    int C1[] = {49,25,75,66,99,42,15,77,86,43};
    int C2[] = {47,85,64,19,47,52,61,84,75,94};
    int C3[] = {98,73,44,67,87,55,27,47,65,24};
    int pass=0,fail=0,high=0,low=100,avg=0,sum=0,i,j,k,l,m,n;

    for (i = 0;i<10; i++){
        if (C1[i] >= 50){
            pass++;
        }
        else{
            fail++;
        }
        if (C2[i] >= 50){
            pass++;
        }
        else{
            fail++;
        }
        if (C3[i] >= 50){
            pass++;
        }
        else{
            fail++;
        }
    }
    for (j = 0;j < 10; j++){
        if (high < C1[j]){
            high = C1[j];
        }
        if (high < C2[j]){
            high = C2[j];
        }
        if (high < C3[j]){
            high = C3[j];
        }
    }
    for (k = 0; k < 10;k++){
        if (low > C1[k]){
            low = C1[k];
        }
        if (low > C2[k]){
            low = C2[k];
        }
        if (low > C3[k]){
            low = C3[k];
        }
    }
    for (l = 0; l < 10; l++){
        sum += C1[l];
    }
    for (m = 0; m < 10; m++){
        sum += C2[m];
    }
    for (n = 0; n < 10; n++){
        sum += C3[n];
    }
    avg = sum / 30;

    printf("the Number of passed students = %d\n",pass);
    printf("the Number of failed students = %d\n",fail);
    printf("First Grade= %d\n",high);
    printf("Last Grade= %d\n",low);
    printf("Average Grade= %d\n",avg);
}
