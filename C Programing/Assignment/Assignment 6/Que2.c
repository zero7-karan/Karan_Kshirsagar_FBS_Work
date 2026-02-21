//Write a program to check given 3 digit number is pallindrome or not.
#include<stdio.h>
void palindrome();
void main(){
	palindrome();
}
void palindrome(){
	int num=123;
	int n1,n2,n3,rev,rem;
	n1=num%10;
	rem=num/10;  
	n2=rem%10; 
	n3=rem/10;
	rev=n1*100+n2*10+n3;
    if(rev==num){
    	printf("%d is Palindrome",num);
	}else{
		printf("%d is not Palindrome",num);
	}
	
}