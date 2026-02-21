//Ask the user to enter marks.
//Then show the result based on these rules:
//If marks are more than 75 ? show "Distinction"
//If marks are more than 65 ? show "First Class"
//If marks are more than 55 ? show "Second Class"
//If marks are 40 or more ? show "Pass Class"
//If marks are less than 40 ? show "Fail"
int rank(int);
#include<stdio.h>
void main() {
	int marks;
	printf("Enter Marks:");
	scanf("%d",&marks);
	int result=rank(marks);
	if(result==1)
		printf("Distinction");
	else if(result==2)
		printf("First Class");
	else if(result==3)
		printf("Second Class");
	else if(result==4)
		printf("Pass Class");
	else
		printf("Fail");
}
int rank(int marks) {
	if(marks>=75) {
		return 1;
	} else if(marks<75 && marks>65) {
		return 2;
	} else if(marks<=65&& marks>55) {
		return 3;
	} else if(marks>=40&& marks<55) {
		return 4;
	} else {
		return 5;

	}
}