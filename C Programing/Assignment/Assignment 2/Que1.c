//Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include<stdio.h>
void main() {
	int num1,num2,result;
	char op;
	printf("enter operator:");
	scanf(" %c",&op);
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	scanf("%d",&num2);
	if(op=='+') {
		result=num1+num2;
	} else {
	} if(op=='-') {
		result=num1-num2;
	} else {
	} if(op=='*') {
		result=num1*num2;
	} else {
	} if(op=='/') {
		result=num1/num2;
	}
	printf("result is %d",result);



}