#include<stdio.h>
int main()
{
	int i,n;
	printf("enter even numbers");
	scanf("%d",&n);
	for( i = 1 ; i < n ; i++)
	{
		i =i+1;
		printf("%d", i);
	}
	return 0;
}
