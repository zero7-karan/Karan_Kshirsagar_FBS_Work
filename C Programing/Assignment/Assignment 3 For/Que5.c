//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
#include<stdio.h>
void main() {
	int n=153;
	int sum=0;
	int temp=n,rem;
	for(temp;temp>0;temp/=10){
		rem=temp%10;
		  sum +=(rem*rem*rem);	
	}
	if(sum==n){
		printf("%d is armstrong",n);
	}else{
		printf("%d is not armstrong",n);
	}
	
	
	    
	
	
	
	
	}