#include <stdio.h>
int main()
{float w,h;
scanf("%f %f",&h,&w);
float BMI= w/(h*h);
printf("%.2fm %.2fkg BMI= %.2f\n",h/100.0,w,BMI);
if (BMI<18.5)
printf("You have low weight\n");
if (18<=BMI<25)
printf("You have normal weight\n");
if (25<=BMI<30)
printf("Obesity (1st-degree)\n");
if (30<=BMI<35)
printf("Obesity (2nd-degree)\n");
if (35<=BMI<40)
printf("Obesity (3rd-degree\n");
if (BMI>=40)
printf("obesity (4th-degree");
	return 0; }