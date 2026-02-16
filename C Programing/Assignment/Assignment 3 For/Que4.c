//Check the given number is prime or not.
//Input: n = 7
//Output: Prime
#include<stdio.h>
void main() {
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	for(int i=2; i<=num/2; i++) {
		if(num%2==0) {
			printf("%d is Not Prime",num);
			break;
		} else {
			printf("%d is Prime",num);
			break;

		}
	}
}