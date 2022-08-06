#include<stdio.h>
int main()
{
	int year;
	printf("%d",&year);
	if((year%4==0)&&(year%400==0)||(year%100!=0))
	printf("%d is a leap year",year);
	else
	printf("%d id not leap year",year);
	return 0;
}
