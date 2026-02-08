// Write a C program to convert temperature from Celsius to Fahrenheit using the
// formula:
// F = (C *9/5) + 32

#include<stdio.h>
void main(){
	float Celsius,Fahrenheit;
	Celsius=24.0;
	Fahrenheit=(Celsius*9/5) + 32;
	printf("temperature in Celsius is: %f and temperature in Fahrenheit is: %f",Celsius,Fahrenheit);
	
}