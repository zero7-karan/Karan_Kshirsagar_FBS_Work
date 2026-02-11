//Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
#include<stdio.h>
void main() {
	int num,sum=0;;
	printf("Enter number:");
	scanf("%d",&num);
	int i=1;
	while(i<num) {
		if(num%i==0) {
			sum+=i;
		}
		i++;
	}
	if(sum==num) {
		printf("%d is a perfect number",num);
	} else {
		printf("not a perfect number");
	}
}