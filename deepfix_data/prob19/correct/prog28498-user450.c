#include <stdio.h>
int main()
{float h,w,hei,bmi;
scanf("%f%f",&h,&w);
hei=h/100;
printf("%f %f",h,w);
bmi=w/hei*hei;
if(bmi<18.5)
printf("You have low weight");
else if(bmi>=18.5 && bmi<25)
printf("You have normal weight");
else if(bmi>=25 && bmi<30)
printf("Obesity(1st-degree)");
else if(bmi>=30 && bmi<35)
printf("Obesity(2nd-level)");
else if(bmi>=35 && bmi<40)
printf("Obesity(3st-degree)");
else if(bmi>=40)
printf("Obesity(1st-degree)");
printf("%fm,%fkg:BMI=%f",hei,w,bmi);
	return 0; }