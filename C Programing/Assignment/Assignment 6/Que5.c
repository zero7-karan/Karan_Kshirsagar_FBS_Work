//Write a program to check whether a person is eligible to vote (age = 18).
#include<stdio.h>
 void isEligible(int);
void main(){
	int age;
	printf("enter your age:");
	scanf("%d",&age);
      isEligible(age);	
}
void isEligible(age){
	if(age>=18){
		printf("Person is eligible to vote");
	}
	else{
		printf("Person is not eligible to vote");
	}
}