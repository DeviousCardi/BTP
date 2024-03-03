#include <stdio.h>
int main() {
	float hgt,wgt,bmi;
	scanf("%f %f",&hgt,&wgt);
	hgt=hgt/100;
	bmi=wgt/(hgt*hgt);
	printf("%.2f m, %.2f kg: BMI = %.2f\n",hgt,wgt,bmi);
	if(bmi<18.5)
	printf("You have low weight");
	else if(bmi<25&&bmi>=18.5)
	printf("You have normal weight");                                      else if(bmi>=25&&bmi<30)
	printf("Obesity (1st-degree)");
	else if(bmi>=30&&bmi<35)
	printf("Obesity (2nd-degree)");
	else if(bmi>=35&&bmi<40)
	printf("Obesity (3rd-degree)");
	else
	printf("Obesity (4th-degree)");
	return 0; }