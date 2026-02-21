//Write a program to check whether a given character is a vowel or consonant.
#include<stdio.h>
int check();
void main(){
	if(check())
	printf("Character is Vowels");
	else
		printf("Character is cansonant");	
}
int check(){
	char ch='k';
	if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'
	||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
	   return 1;
	}else{
	   return 0;
	}
}