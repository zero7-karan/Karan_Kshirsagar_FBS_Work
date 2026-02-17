//Write a menu driven program to take a number for user and perform operations as follows.
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse number
//6.To find sum of digits.
#include<stdio.h>
void main() {
	int number;
	printf("Enter Number:");
	scanf("%d",&number);
	if(number==1) {
		printf("Check Given Number is Even or Odd:");
		int num;
		printf("enter number:");
		scanf("%d",&num);
		if(num%2==0)
			printf("%d is even",num);
		else
			printf("%d is odd",num);

	} else if(number==2) {
		printf("check number is prime or not\n");
		int num;
		int flag=0;
		printf("enter number:");
		scanf("%d",&num);
		for(int i=2; i<=num/2; i++) {
			if(num%i==0)
				flag=1;
		}
		if(flag==0)
			printf("%d is prime",num);
		else
			printf("%d is not a prime number",num);

	} else if(number==3) {
		printf("check number is pallindrome or not\n");
		int num,temp;
		int rem=0;
		int rev=0;
		printf("enter number:");
		scanf("%d",&num);
		temp=num;
		while(temp>0) {
			rem=temp%10;
			rev=rev*10+rem;
			temp=temp/10;
		}
		if(rev==num) {
			printf("%d is palindrome",num);
		} else {
			printf("%d is not palindrome",num);
		}
	} else if(number==4) {
		printf("check number is positive, negative or zero\n");
		int num=0;
		printf("enter number:");
		scanf("%d",&num);
		if(num>0) {
			printf("%d is positive",num);
		} else if(num<0) {
			printf("%d is negative",num);
		} else {
			printf("%d is zero",num);
		}
	} else if(number==5) {
		printf("reverse a number\n");
		int num,rev=0,rem;
		printf("enter number:");
		scanf("%d",&num);
		while(num>0) {
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
		printf("%d reversed number ",rev);
	} else if(number==6) {
		printf("find sum of digits\n");
		int num,rem=0;
		int sum=0;
		printf("enter number:");
		scanf("%d",&num);
		while(num>0) {
			rem=num%10;
			sum=sum+rem;
			num=num/10;
		}
		printf("%d is a sum of all digits",sum);
	}
}