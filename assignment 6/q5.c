#include<stdio.h>
int main()
{
  int base,exp;
  long result=1;
  printf("enter number");
  scanf("%d%d",&base,&exp);
  while(exp!=0)
  {
  	result*=base;
  	--exp;
  }
  printf("ans=%1d",result);
  return 0;	
}
