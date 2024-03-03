#include <stdio.h>
int main() {
float hc,w,hm,bmi;
scanf("%f %f",&hc,&w);
hm=hc/100.0;
bmi=w/(hm*hm);
printf("%.2f m, %.2f kg: BMI = %.2f\n",hm,w,bmi);
if(bmi<18.5)
printf("You have low weight");
else if(18.5<=bmi&&bmi<25)
printf("You have normal weight");
else if(25<=bmi&&bmi<30)
printf("Obesity (1st-degree)");
else if(30<=bmi&&bmi<35)
printf("Obesity (2nd-degree)");
else if(35<=bmi&&bmi<40)
printf("obesity (3rd-degree)");
else if(40<=bmi)
printf("Obesity (4th-degree)");
return 0; }