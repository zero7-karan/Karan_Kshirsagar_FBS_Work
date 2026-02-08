// Write a C program to swap two numbers using a temporary third variable.

#include<stdio.h>
void main(){
	int num1,num2,temp;
	num1=10;
	num2=20;
    printf("num1 =%d and num2 =%d before swap \n",num1,num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("num1 =%d and num2 =%d after swap",num1,num2);
    
};