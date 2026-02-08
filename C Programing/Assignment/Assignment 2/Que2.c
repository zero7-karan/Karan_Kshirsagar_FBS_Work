//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
#include<stdio.h>
void main() {
	int s1,s2,s3;
	printf("enter side 1:");
	scanf("%d",&s1);
	printf("enter side 2:");
	scanf("%d",&s2);
	printf("enter side 3:");
	scanf("%d",&s3);
	if(s1==s2&&s2==s3&&s3==s1) {
		printf("triangle is equilateral:");
	} else if (s1 == s2 || s1 == s3 || s2 == s3) {
		printf("Triangle is Isosceles");
	} else {
		printf("triangle is Scalene:");
	}
}