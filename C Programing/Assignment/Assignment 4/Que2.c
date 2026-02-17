//Print prime numbers in the given range 1 to n.
#include<stdio.h>
void main() {
	int range;
	printf("enter number:");
	scanf("%d",&range);
	for(int i=1; i<=range; i++) {
		int count=0;
		for(int j=1; j<=i; j++) {
			if(i%j==0) {
				count++;
			}
		}
		if(count==2) {
			printf("%d ",i);
		}
	}

}
