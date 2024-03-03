#include <stdio.h>
int main() {
	float hcm,hm,w,BMI;
	scanf("%f",&hcm);
	scanf("%f",&w);
	if(!(hcm==0&&w==0))
	{hm=hcm/100;
	BMI=w/(hm*hm);
	printf("%.2f m, %.2f kg: BMI = %.2f\n",hm,w,BMI);
	if(BMI<18.5)
	printf("You have low weight");
	else if(BMI>=18.5&&BMI<25)
	printf("You have normal weight");
	else if(BMI>=25&&BMI<30)
	printf("Obesity (1st-degree)");
	else if(BMI>=30&&BMI<35)
	printf("Obesity (2nd-degree)");
	else if(BMI>=35&&BMI<40)
	printf("Obesity (3rd-degree)");
	else if(BMI>=40)
	printf("Obesity (4th-degree)"); }
	return 0; }