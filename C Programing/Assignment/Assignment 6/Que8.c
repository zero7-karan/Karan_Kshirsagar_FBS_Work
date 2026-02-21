#include<stdio.h>
int sum(int,int);
int devide(int,int);
int mul(int,int);
int subtract(int,int);
void main() {
	int num1,num2;
	char ch;
	printf("enter numbers:");
	scanf("%d %d",&num1,&num2);
	fflush(stdin);
	printf("enter character:");
	scanf("%c",&ch);
	int result;
	if(ch=='+')
		result=sum(num1,num2);
	else if(ch=='-')
		result=subtract(num1,num2);
	else if(ch=='*')
		result=mul(num1,num2);
	else if(ch=='/')
		result=devide(num1,num2);

	printf("%d",result);
}
int sum(int num1,int num2) {
	int result=num1+num2;
	return result;
}
int devide(int num1,int num2) {
	int result=num1/num2;
	return result;
}
int mul(int num1,int num2) {
	int result=num1*num2;
	return result;
}
int subtract(int num1,int num2) {
	int result=num1-num2;
	return result;
}
