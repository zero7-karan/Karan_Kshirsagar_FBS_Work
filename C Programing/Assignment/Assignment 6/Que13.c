#include<stdio.h>
int isPrime(int,int);
void main(){
	int num;
	int count=0;
	printf("enter number:");
	scanf("%d",&num);
	count=isPrime(num,count);
	if(count==2)
		printf("number is prime");
	else
		printf("number is prime");
}
int isPrime(int num,int count){
	int i=1;
	while(i<=num) {
		if(num%i==0)
			count++;
		i++;
	}
	return count;	
}