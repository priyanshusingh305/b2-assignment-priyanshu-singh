#include<stdio.h>
int main()
{
 int i,num;
 printf("enter any number to find its factor: ");
 scanf("%d",&num);
 for(i=1; i<=num; i++)
 {
 	if(num % i == 0)
 	{
 		printf("%d",i);
	 }
}
return 0;	
}
