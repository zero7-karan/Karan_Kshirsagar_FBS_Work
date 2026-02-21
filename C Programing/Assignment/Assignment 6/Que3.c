//Write a program to check whether a given year is a leap year.
#include<stdio.h>
int leapYear();
void main() {
	if(leapYear()) {
		printf(" leap year");
	} else {
		printf(" not a leap year");
	}
}
int leapYear() {
	int year=2000;
	if(year%4==0 && year%100!=0 || year%400==0) {
		return 1;
	} else {
		return 0;
	}
}