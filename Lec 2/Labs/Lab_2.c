#include<stdio.h>

void main(){
	int x;
	float salary;
	printf("Enter working hours :");
	scanf(" %d",&x);
	salary=x*50;
	if (x<40){
		salary =salary - (salary*.1);
		printf("Your salary is %f",salary);
	}
	else {
		printf("your salary is %f",salary);
	}
}
