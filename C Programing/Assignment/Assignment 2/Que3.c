//Write a program to find greatest of three numbers using nested if-else.
#include<stdio.h>
void main() {
	int num1,num2,num3;
	num1=14;
	num2=77;
	num3=9;
	if(num1>num2 && num1>num3){
		printf("num1 is greater");
	}else if(num2>num1 && num2>num3){
		printf("num2 is greater");
	}else{
		printf("num3 is greater");
	}
	
	
	
}