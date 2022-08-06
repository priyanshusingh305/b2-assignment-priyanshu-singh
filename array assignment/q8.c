#include<stdio.h>
int main()
{
	int arr[100],freq[100];
	int size,i,j,count;
	printf("enter size of array");
	scanf("%d",&size);
	printf("enter elements of array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
			count++;
			freq[j]=0;	
			}
		}
		if(freq[i]!=1)
		{
			freq[i]=count;
			
		}
	}
	printf("\nunique element of all array:\n");
	for(i=0;i<size;i++)
	{
		if(freq[i]==1)
		{
			printf("%d \n",arr[i]);
		}
	}
	return 0;
}
