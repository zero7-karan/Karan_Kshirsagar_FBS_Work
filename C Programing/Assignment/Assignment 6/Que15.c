// Print perfect numbers in the given range 1 to n.
void isPerfect(int);
#include<stdio.h>
void main() {
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	isPerfect(num);
}
void isPerfect(int num) {
	for(int i=1; i<num; i++) {
		int sum=0;
		for(int j=1; j<i; j++) {
			if(i%j==0) {
				sum=sum+j;
			}
		}
		if(sum==i) {
			printf("%d ",i);
		}
	}

}
