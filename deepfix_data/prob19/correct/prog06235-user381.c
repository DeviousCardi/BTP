#include <stdio.h>
int main()
{ float x=0.0;
float w=0.0;
float h=0.0;
h=x/100;
float bmi=0.0;
bmi=w/h*h;
scanf("%f%f",&x,&w);
printf("%f\n\n",bmi);
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