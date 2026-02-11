// Check the given number is prime or not.
// Input: n = 7
// Output: Prime
#include<stdio.h>
void main() {
	int num;
	int count=0;
	printf("enter number:");
	scanf("%d",&num);
	int i=1;
	while(i<=num) {
		if(num%i==0)
			count++;
		i++;
	}
	if(count==2)
		printf("%d is prime",num);
	else
		printf("%d not a prime",num);

}