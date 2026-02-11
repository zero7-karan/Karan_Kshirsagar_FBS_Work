//Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
#include<stdio.h>
void main() {
	int n,Start=0,Last,Sum;
	printf("Enter Number:");
	scanf("%d",&n);
	Last=n%10;
	Start=n;
	while(Start>=10) {
		Start=Start/10;
	}
	Sum=Start+Last;
	printf("Sum of First and Last digit is %d",Sum);
}