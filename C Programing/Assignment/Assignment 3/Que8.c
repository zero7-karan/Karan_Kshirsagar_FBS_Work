//Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
#include<stdio.h>
void main() {
	int n, rem ;
	int sum=0;
	printf("Enter Your Number:");
	scanf("%d",&n);
	int temp=n;
	while(temp>=0) {                   
		int fact=1;
		rem=temp%10;
		int i=1;
		while(i<=rem) {
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		temp=temp/10;
	}
	if(n==sum)
		printf("%d is a Strong number",n);
	else
		printf("%d is Not a Strong number",n);


}