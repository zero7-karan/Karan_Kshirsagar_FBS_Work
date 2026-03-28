//1. Write a program to count number of words in a string.
#include<stdio.h>
#include<string.h>
void main() {
	char str[50];
	int count = 0;
	printf("enter sentence:");
	gets(str);
	for(int i=0; str[i]!='\0'; i++) {
		if(str[i] == ' ')
			count++;
	}
	printf("%d words in string",count+1);
}



