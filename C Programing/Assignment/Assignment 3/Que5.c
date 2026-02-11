//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
#include<stdio.h>
void main() {
	int n;
	int temp,r,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	temp=n;
	while(temp>=1) {
		r=temp%10;            //3
		sum+=(r*r*r);
		temp=temp/10;
	}
	if(sum==n)
		printf("%d Armstrong",n);
	else
		printf("%d Not a Armstrong:",n);
}