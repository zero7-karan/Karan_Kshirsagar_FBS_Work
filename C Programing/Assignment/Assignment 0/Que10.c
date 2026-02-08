// Write a C program to input marks of five subjects, find the total marks, and calculate
// the percentage.
#include<stdio.h>
void main(){
	float s1,s2,s3,s4,s5,total_marks;
	float percentage;
	s1=89;
	s2=90;
	s3=92;
	s4=90;
	s5=88;
	total_marks=s1+s2+s3+s4+s5;
	percentage=(total_marks/500 )*100;
	printf("total marks are %f and percentage is %f",total_marks,percentage);
}