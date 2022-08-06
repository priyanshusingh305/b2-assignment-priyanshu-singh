#include<stdio.h>
int main()
{
	int sec,hours,s,min;
	printf("enter sec");
	scanf("%d",&sec);
	hours=(sec/3600);
	min=(sec-(3600*hours))/60;
	s=(sec-(3600*hours)-(min*60));
	printf("%d\n%d",hours,min,s);
	return 0;
}
