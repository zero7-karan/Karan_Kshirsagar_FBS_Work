//Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.Accept three sides of a triangle from the user and determine whether the triangle is
//equilateral, isosceles, or scalene.
void triangle(int,int,int);
#include<stdio.h>
void main() {
	int s1,s2,s3;
	printf("enter sides:");
	scanf("%d %d %d",&s1,&s2,&s3);
	triangle(s1,s2,s3);
}
void triangle(int s1,int s2,int s3) {
	if(s1==s2&&s2==s3&&s3==s1) {
		printf("triangle is equilateral:");
	} else if (s1 == s2 || s1 == s3 || s2 == s3) {
		printf("Triangle is Isosceles");
	} else {
		printf("triangle is Scalene:");
	}
}