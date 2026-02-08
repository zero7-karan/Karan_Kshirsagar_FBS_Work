//Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
//respectively.

#include<stdio.h>
void main(){
	int basic=8000;
	int da,ta,hra,totals;
	if(basic<=5000){
	    da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;
		totals=basic+da+ta+hra;
		printf("%d total" ,totals);
	}
	else{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
		totals=basic+da+ta+hra;
		printf("%d total" ,totals);
	}
}