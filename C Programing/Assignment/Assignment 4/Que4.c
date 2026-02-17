// Print strong numbers in the given range 1 to n.
#include<stdio.h>
void main() {
	int n;
	printf("enter number:");
	scanf("%d",&n);
	for(int i=1; i<=n; i++) {
		int temp=i;
		int sum=0;
		while(temp>0) {
			int fact=1;
			int rem=temp%10;
			for(int j=1; j<=rem; j++) {
				fact=fact*j;
			}
			sum=sum+fact;
			temp=temp/10;
		}
		if(sum==i) {
			printf("%d ",i);
		}


	}
}
