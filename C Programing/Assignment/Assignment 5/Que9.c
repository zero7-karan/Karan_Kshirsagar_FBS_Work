//Print a pattern of stars in diamond shape
//Input: n = 4
//Output:
//
//*
//**
//***
//****
//***
//**
//*
#include<stdio.h>
void main() {
	int n;
	printf("enter number:");
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
		
	}
}
