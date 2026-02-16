//Find factorial of given number.
//Input: n = 5
//Output: 120
#include<stdio.h>
void main() {
	int n;
	int fact=1;
	printf("enter number:");
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		fact=fact*i;
	}
	printf("%d:",fact);
}
