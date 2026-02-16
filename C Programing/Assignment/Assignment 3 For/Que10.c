//Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
#include<stdio.h>
void main() {
	int n=12345;
	int first=0,last=0;
	int sum=0;
	last=n%10;
	for(n; n>0; n/=10) {
		first=n;
	}
	sum=first+last;
	printf("%d",sum);

}