//Print table for given number.
//Input: n = 5
//Output: 5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
void main(){
	int num,result=0;
	printf("Enter Number:");
	scanf("%d",&num);
	for(int i=1;i<=10;i++){
	  result=num*i;
	  printf("%d ", result);	
	}
	
}