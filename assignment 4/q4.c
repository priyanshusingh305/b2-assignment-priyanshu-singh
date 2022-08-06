#include<stdio.h>
int main()
{
	char ch;
	int lower,uppar;
	printf("enter alphabet");
	scanf("%c",&ch);
	lower=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	uppar=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(lower>uppar)
	printf("lower=%d",ch);
	else
	printf("uppar=%d",ch);
	return 0;
}
