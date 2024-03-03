#include <stdio.h>
int main() {
float ht,wt;
scanf("%f %f",&ht,&wt);
ht=ht/100;
float bmi=wt/(ht*ht);
printf("%.2f m,%.2f kg: BMI = %.2f\n",ht,wt,bmi);
if(bmi<18.5)
printf("You have low weight");
else if(bmi>=18.5&&bmi<25)
printf("You have normal weight");
else if(bmi>=25&&bmi<30)
printf("besity (1st-degree)");
else if(bmi>=30&&bmi<35)
printf("besity (2nd-degree)");
else if(bmi>=35&&bmi<40)
printf("besity (3rd-degree)");
else
printf("Obesity (4th-degree)");
	return 0; }