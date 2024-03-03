#include <stdio.h>
int main()
{float w,h;
scanf("%f %f",&h,&w);
float BMI= w/((h/100)*(h/100));
printf("%.2fm %.2fkg\: BMI= %.2f\n",h/100.0,w,BMI);
if (BMI<18.5)
printf("You have low weight\n");
else if (18<=BMI && BMI<25)
printf("You have normal weight\n");
else if (25<=BMI && BMI<30)
printf("Obesity (1st-degree)\n");
else if (30<=BMI && BMI<35)
printf("Obesity (2nd-degree)\n");
else if (35<=BMI && BMI<40)
printf("Obesity (3rd-degree\n");
else if (BMI>=40)
printf("obesity (4th-degree");
	return 0; }