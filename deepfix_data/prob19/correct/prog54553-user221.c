#include <stdio.h>
int main()
{ float h,w,f;
scanf("%f %f",&h,&w);
float bmi=w*100*100/(h*h);
f=h/100;
printf("%0.2f m, %0.2f kg: BMI = %0.2f\n",f,w,bmi);
if(bmi<18.5){printf("you have low weight");}
else
if(bmi>=18.5&&bmi<25){printf("you have normal weight");}
else
if(bmi>=25&&bmi<30){printf("Obesity \n(1st-degree)");}
else
if(bmi>=30&&bmi<35){printf("Obesity (2nd-degree)");}
else
if(bmi>=35&&bmi<40){printf("Obesity (3rd-degree)");}
else
if(bmi>=40){printf("Obesity (4th-degree)");}
	return 0; }