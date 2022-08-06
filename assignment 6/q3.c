#include<stdio.h>
int main()
{
	int n,rev,sum=0,temp;
	printf("enter number");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		rev=n%10;
		sum=rev*10+rev;
		n=n/10;
	}
	if(sum==temp)
	printf("palindrome");
	else
	printf("not palindrome");
	
}
