#include<stdio.h>
int main()
{
	int n1,n2,i;
	printf("enter two number");
	scanf("%d%d",&n1,&n2);
	for(i=0;i<n2;i++)
	{
		n1++;
	}
	printf("two number = %d",n1);
	return 0;
}
