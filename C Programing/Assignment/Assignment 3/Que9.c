//Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome
#include<stdio.h>
void main() {
	int n=121,temp,r,rem=0;
	temp=n;
	while(temp>=1) {
		r=temp%10;
		rem=rem*10+r;
		temp=temp/10;
	}
	if(n==rem) {
		printf("%d is palindrome",n);
	} else {
		printf("%d is not palindrome",n);
	}
}