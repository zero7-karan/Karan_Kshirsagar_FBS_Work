// Write a C program to convert given minutes into hours and remaining minutes.
#include<stdio.h>
void main(){
	int minutes,hour,rem_minutes;
	minutes=150;
	hour=minutes/60;
	rem_minutes=minutes%60;
	printf("minutes are %d total hours are: %d and rem_minutes are: %d",minutes,hour,rem_minutes);
}