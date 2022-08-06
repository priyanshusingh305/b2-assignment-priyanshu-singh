#include<stdio.h>
int main()
{
  	int n,i,fact=1;
  	printf("enter number");
  	scanf("%d",&n);
  	for(i=13;i<=n;i++)
  	{
  		fact=fact*i;
	  }
	  printf("%d\n%d",fact,n);
	  return 0;
}
