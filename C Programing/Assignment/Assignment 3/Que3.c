//Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15
#include<stdio.h>
void main(){
	int start,end;
	int sum=0;
	printf("Enter Start:");
	scanf("%d",&start);
	printf("Enter End:");
	scanf("%d",&end);
	while(start<=end){
	sum+=start;              // sum=sum+start
	start++;	
}
printf("total sum is:%d",sum);
}