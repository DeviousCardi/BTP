#include <stdio.h>
int main()
{ float x=0;
float w=0;
float h=0;
float BMI=0;
scanf("%f%f",&x,&w);
h=x/100;
printf("%.2f m",h);
printf(" %.2f kg",w);
BMI=w/(h*h);
printf("  BMI = %.2f\n",BMI);
if(BMI<18.5)
{printf("You have low weight");}
else if(BMI>=18.5 && BMI<25)
	 {printf("You have normal weight");}
	else if(BMI>=25 && BMI<30)
	{printf("Obesity (1st-degree)");}
	else if(BMI>=30 && BMI<35)
	{printf("Obeity (2nd degree)");}
	else if(BMI>=35 && BMI<40)
	{printf("Obesity (3rd-degree)");}
	else if(BMI>=40)
	{printf("Obesity (4th-degree)");}
	return 0; }