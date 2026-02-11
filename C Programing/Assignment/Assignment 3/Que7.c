//Find factorial of given number.
//Input: n = 5
//Output: 120
#include<stdio.h>
void main() {
	int num,fact=1;;
	printf("Enter number:");
	scanf("%d",&num);
	int i=1;
	while(i<=num) {
		fact=fact*i;
		i++;
	}
	printf("Factorial is:%d",fact);
}