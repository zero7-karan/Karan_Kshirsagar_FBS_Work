//Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
#include<stdio.h>
void main() {
	int n=145;
	int temp=n,rem;
	int sum=0;
	for(temp; temp>0; temp/=10) {
		int fact=1;
		rem=temp%10;
		for(int i=1; i<=rem; i++) {
			fact=fact*i;
		}
		sum+=fact;
	}
	if(sum==n) {
		printf("%d is strong:",n);
	} else {
		printf("%d is not Strong",n);
	}

}