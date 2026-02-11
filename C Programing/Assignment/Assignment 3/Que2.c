// Print table for given number.
// Input: n = 5
// Output: 5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
void main(){
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	int i=1;
	while(i<=10){
	int table=num*i;
	printf(" %d",table);
	i++;	
		
	}
}