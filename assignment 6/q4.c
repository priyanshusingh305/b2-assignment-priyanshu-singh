#include<stdio.h>
int main()
{
  int num,i,flag=0;
  printf("enter num");
  scanf("%d",&num);
  if(num==0||num==1)
  flag=1;
  for(i=2;i<=num/2;++i)
  {
  	if(num%i==0)
  	flag=1;
  	break;
  }
  	
	  if(flag==0)
	  printf("prime number=%d",num);
	  else
	  printf("not prime number=%d",num);
}
