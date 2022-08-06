#include<stdio.h>
int main()
{
	float amount,unit, total,charge;
	printf("enter num");
	scanf("%f",&unit);
	
	if(unit<50)
	amount=unit*0.5;
	else if(unit<150)
	amount=25+((unit-50)*0.75);
	else if(151<250)
	amount=100+((unit-150)*1.20);
	else if(251<500)
	amount=220+((unit-250)*1.50);
	charge=amount*0.20;
	total=amount+charge;
	printf("%0.2f",total);
}
