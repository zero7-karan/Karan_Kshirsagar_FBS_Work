//Write a program to check whether a given character is uppercase or lowercase.

#include<stdio.h>
void main(){
	char ch='A';
	if(ch>='A'&& ch<='Z'){
		printf("Char is uppercase");
	}
	else{
		printf("Char is lowercase");
	}
	}