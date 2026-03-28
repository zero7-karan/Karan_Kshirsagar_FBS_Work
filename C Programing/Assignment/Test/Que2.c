//Write a program to print following series:
//1 + 11+ 111+ 1111+ ..... + n times 1
#include<stdio.h>
void main() {
	int n;
	printf("enter value of n:");
	scanf("%d",&n);
	int num=0;
	for(int i=0;i<=n;i++){
		num=num*10+1;
		printf("%d ",num);
	}
}

