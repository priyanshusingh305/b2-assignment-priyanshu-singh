#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,i,number;
	printf("enter the number for fibonacci series:");
	scanf("%d",&number);
	printf("fibonacci series for a given number:");
	printf("\n%d",n1,n2);
	for(i = 2; i < number; ++i)
	{
		n3=n1+n2;
		printf("%d",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}
