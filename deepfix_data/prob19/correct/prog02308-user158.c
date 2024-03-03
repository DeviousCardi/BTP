#include <stdio.h>
int main()
{float h,w;
scanf("%f%f",&h,&w);
float H=h/100.0;
float BMI=w/(H*H);
printf("%.2fm\, %.2fkg: BMI=%.2f\n",H,w,BMI);
if(BMI<18.5)
{printf("You have low weight");}
else if(BMI>=18.5&&BMI<25)
{printf("You have normal weight");}
else if(BMI>=25&&BMI<30)
{printf("Obesity(1st-degree");}
	return 0; }