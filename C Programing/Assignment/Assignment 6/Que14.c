//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
int isArmstrog(int);
#include<stdio.h>
void main() {
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	if(isArmstrog(n)) {
		printf("%d is armstrog",n);
	} else {
		printf("%d is not armstrog",n);
	}
}
int isArmstrog(int n) {
	int sum=0;
	int temp=n;
	while(n>=1) {
		int r=n%10;
		sum+=(r*r*r);
		n=n/10;
	}
	if(sum==temp)
		return 1;
	else
		return 0;
}