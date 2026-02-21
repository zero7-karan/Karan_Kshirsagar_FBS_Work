//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.
#include <stdio.h>
int totol1(int);
int totol2(int);
void main() {
	int basic;
	printf("Enter basic:");
	scanf("%d",&basic);
	if(basic<=5000)
		basic=totol1(basic);
	else {
		basic=totol2(basic);
	}
	printf("%d",basic);
}
int totol1(int basic) {
	int da,ta,hra,totals;
	da=basic*0.10;
	ta=basic*0.20;
	hra=basic*0.25;
	totals=basic+da+ta+hra;
	return totals;
}
int totol2(int basic) {
	int da,ta,hra,totals;
	da=basic*0.15;
	ta=basic*0.25;
	hra=basic*0.30;
	totals=basic+da+ta+hra;
	return totals;
}























