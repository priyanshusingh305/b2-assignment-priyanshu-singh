#include<stdio.h>
int main()
{
	int rem,n,i,fact,sum=0;
	printf("enter number");
	scanf("%d,&n");
	int temp=n;
	while(n)
	{
		i=1,fact=1;
		rem=n%10;
		while(i<=rem)
		{
			fact=fact*1;
			i++;
		}
		n=n/10;
		sum=sum+fact;
	}
	if(sum==temp)
	{
	printf("strong number");
}
else
{
	printf("not strong number");
}
return 0;
}
