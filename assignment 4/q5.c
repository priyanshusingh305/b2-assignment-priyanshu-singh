#include<stdio.h>
int main()
{
  float basic,HRA,DA,salary;
  printf("enter salary");
  scanf("%f",&basic);
  if(basic<=10000)
  {
  	
  	HRA=(basic*8)/100;
  	DA=(basic*10)/100;
   }
   else if(basic<=20000)
   {
   	 HRA=(basic*16)/100;
   	 DA=(basic*20)/100;
   	 
   }
   else
   {
   	 HRA=(basic*24)/100;
   	 DA=(basic*30)/100;
   }
   salary=basic+HRA+DA;
   printf("%0.2f",salary);	
	return 0;
}
