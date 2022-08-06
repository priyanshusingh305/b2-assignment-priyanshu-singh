#include<stdio.h>
int main()
{
	int w1,w2,i1,i2;
	float average;
		printf("enter weight");
		scanf("%d%d",&w1,&w2);
		printf("%d%d",&i1,&i2);
		average=((w1*i1)+(w2*i2))/(i1+i2);
		printf("average=%0.2f",average);
		return 0;
}
