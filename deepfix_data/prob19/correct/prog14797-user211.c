#include <stdio.h>
int main()
{float h,w,m,bmi;
scanf("%f%f",&h,&w);
m=h/100;
bmi=w/(m*m);
printf("%.2f%",m);
printf(" m, ");
printf("%.2f",w);
printf(" kg: BMI = ");
printf("%.2f\n",bmi);
if(bmi<18.5)
printf("You have low weight");
if(bmi>=18.5&&bmi<25)
printf("You have normal weight");
if(bmi>=25&&bmi<30)
printf("Obesity (1st-degree)");
if(bmi>=30&&bmi<35)
printf("Obesity (2nd-degree)");
if(bmi>=35&&bmi<40)
printf("Obesity (3rd-degree)");
if(bmi>=40)
printf("Obesity (4th-degree)");
    return 0;}