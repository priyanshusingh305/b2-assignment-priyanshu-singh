#include<stdio.h>
int main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	if(n>=0&&n<=9)
	printf("single digit=%d",n);
	else if(n>10&&n<=99)
	printf("double digit=%d",n);
	else if(n>100&&n<=999)
	printf("triple digit=%d",n);
}
