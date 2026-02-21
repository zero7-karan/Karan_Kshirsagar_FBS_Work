//Write a program to find greatest of three numbers using nested if-else.
int findGreater(int,int,int);
#include<stdio.h>
void main(){
	int num1,num2,num3;
	printf("enter numbers:");
	scanf("%d %d %d",&num1,&num2,&num3);
	findGreater(num1,num2,num3);
	
}
int findGreater(int num1,int num2,int num3){
		if(num1>num2 && num1>num3){
		printf("num1 is greater");
	}else if(num2>num1 && num2>num3){
		printf("num2 is greater");
	}else{
		printf("num3 is greater");
	}
	
}
