#include<stdio.h>
int main()
{
	int a,b,c,d,e,total;
	float percentage,average;
	printf("enter number");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	total=a+b+c+d+e;
	average=total/5;
	percentage=(total/500.0)*100;
	printf("%d%0.2f%0.2f",total,average,percentage);
	return 0;
}
