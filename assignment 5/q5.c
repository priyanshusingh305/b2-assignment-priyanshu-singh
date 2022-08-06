#include<stdio.h>
int main()
{
	int n1,n2,sum,sub,mul,div;
	printf("enter number");
	scanf("%d%d",&n1,&n2);
	sum=n1+n2;
	sub=n1-n2;
	mul=n1*n2;
	div=n1/n2;
	
	printf("%d%d%d%d%d",sum,sub,div,mul);
	return 0;
	
}
