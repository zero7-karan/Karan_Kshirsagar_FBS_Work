//Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
#include<stdio.h>
void main() {
	int num;
	int sum=0;
	printf("enter number:");
	scanf("%d",&num);
	for(int i=1; i<num; i++) {
		if(num%i==0) {
			sum+=i;
		}
	}
	printf("%d\n",sum);
	if(num==sum) {
		printf("%d is perfect number",num);
	} else {
		printf("%d is not a perfect number",num);
	}

}