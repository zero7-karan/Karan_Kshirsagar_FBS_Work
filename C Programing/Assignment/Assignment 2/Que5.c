//Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
#include<stdio.h>
void main(){
	double price,fprice;
	char student;
	printf("enter price:");
	scanf("%lf",&price);
	printf("student or not: ");
	scanf(" %c",&student);
	if(student=='y'||student=='Y'){
	
	   if(price>=500){
	   	fprice= price-price*0.20;
	   }else{
	   	fprice=price-price*0.10;
	   }
}
	else{
	 if(price>=600)	{
	 	fprice=price-price*0.15;
	 }else{
	 	fprice=price-price*0.0;
	 }
	}
	printf("price is %lf after Discount %lf",price,fprice);
}