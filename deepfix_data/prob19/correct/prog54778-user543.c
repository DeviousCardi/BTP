#include <stdio.h>
int main()
{float hi,wt,bmi;
scanf("%f %f",&hi,&wt);
bmi=(wt/hi)/hi;
bmi=bmi*10000;
printf("%0.2f m, %0.2f kg:\n",hi/100.0,wt);
printf("BMI = %0.2f \n",bmi);
if(bmi<18.5)
printf("You have low wieght");
else if(bmi<25)
printf("You have normal wieght");
else if(bmi<30)
printf("Obesity (1st-degree)");
else if(bmi<35)
printf("Obesity (2nd-degree)");
else if(bmi<40)
printf("Obesity (3rd-degree");
else
printf("Obesity (4th-degree)");
return 0; }