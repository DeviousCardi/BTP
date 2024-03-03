#include <stdio.h>
int main()
{ float x=0;
float w=0;
float h=0;
float bmi=0;
scanf("%f%f",&x,&w);
h=x/100;
printf("%.2f",h);
printf(" %.2f",w);
bmi=w/h*h;
printf(" %.2f\n\n",bmi);
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