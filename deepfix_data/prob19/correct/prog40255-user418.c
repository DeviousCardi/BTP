#include <stdio.h>
int main()
{float BMI,H, height,weight;
scanf("%f %f",&height,&weight);
H=height/(float)100;
BMI = (float)weight/(H*H);
printf("%.2f m, %.2fkg: BMI = %.2f\n",H,weight,BMI);
if(BMI<18.5)printf("You have low weight");
else if(BMI<25)printf("You have normal weight");
else if(BMI<30)printf("Obesity(1st-degree)");
else if(BMI<35)printf("Obesity(2nd-degree)");
else if(BMI<40)printf("Obesity(3rd-degree)");
else printf("Obesity(4th-degree)");
return 0; }