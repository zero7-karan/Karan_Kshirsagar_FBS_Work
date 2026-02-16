//Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome
#include<stdio.h>
void main() {
	int n=121;
	int temp=n;
	int rev=0,rem=0;
	for(temp; temp>0; temp/=10) {
		rem=temp%10;
		rev=rev*10+rem;
	}
	if(rev==n) {
		printf("%d number is palindrome",n);
	} else {
		printf("%d number is not palindrome",n);
	}
}