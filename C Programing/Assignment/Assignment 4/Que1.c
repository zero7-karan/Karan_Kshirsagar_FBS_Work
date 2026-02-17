//Print armstrong numbers in the given range 1 to n.
#include<stdio.h>
void main() {
	int no;
	int temp,rem;
	printf("enter number");
	scanf("%d",&no);
	for(int i=1; i<=no; i++) {
		int temp=i;
		int sum=0;
		while(temp>0) {
			rem=temp%10;
			sum=sum+(rem*rem*rem);
			temp=temp/10;
		}
		if(i==sum) {
			printf("%d ",i);
		}
	}

}