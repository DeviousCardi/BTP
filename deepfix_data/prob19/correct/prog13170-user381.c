#include <stdio.h>
int main()
{ float x=0;
float w=0;
float h=0;
float BMI=0;
scanf("%f%f",&x,&w);
h=x/100;
printf("%.2f",h);
printf(" %.2f",w);
BMI==w/h*h;
printf(" BMI=%.2f\n");
if(BMI<18.5)
{printf("you have low weight");}
else if(BMI>=18.5 && BMI<25)
	 {printf("you have normal weight");}
	else if(BMI>=25 && BMI<30)
	{printf("obesity(1st-degree)");}
	else if(BMI>=30 && BMI<35)
	{printf("obeity(2nd degree)");}
	else if(BMI>=35 && BMI<40)
	{printf("obesity(3rd-degree)");}
	else if(BMI>=40)
	{printf("obesity(4th-degree)");}
	return 0; }