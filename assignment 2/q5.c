#include<stdio.h>
int main()
{
	int n,a,d,sum;
	printf("enter n");
	scanf("%d",&n);
	
	d=n%10;
	sum=d;
	a=(n/1000)%10;
	sum=sum+a;
	
	printf("%d",sum);
}
