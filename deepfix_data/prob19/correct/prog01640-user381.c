#include <stdio.h>
int main()
{ int wt;
int ht;
int bmi;
bmi=wt/(ht*ht);
scanf("%f%f",ht,wt);
if(bmi<18.5)
{printf("you have low weight");}
else if(bmi>=18.5 && bmi<25)
	{ printf("you have normal weight");}
	else if(bmi>=25 && bmi<30)
	{printf("obesity(1st-degree)");}
	else if(bmi>=30 && bmi<35)
	{printf("obeity(2nd degree)");}
	else if(bmi>=35 && bmi<40)
	{printf("obesity(3rd-degree)");}
	else if(bmi>=40)
	{printf("obesity(4th-degree)");}
	return 0; }