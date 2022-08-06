#include<stdio.h>
int main()
{
 char employeid[10];
 int hours;
 double value,salary;
 printf("enter employee id");
 scanf("%s",&hours);
 printf("enter working hours");
 scanf("%d",&hours);
 printf("enter value");
 scanf("%1f",&value);
 
 salary=hours*value;
 printf("%s\n%0.21f",employeid,salary);
 
}
