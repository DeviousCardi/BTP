#include <stdio.h>
int main() {
	float h,H,w,bmi;
	scanf("%f%f",&H,&w);
	h=H/100;
	bmi=w/(h*h);
	printf("%.2f m, %.2f kg: BMI = %.2f\n",h,w,bmi);
	if(bmi<18.5)
	printf("\"You have low weight\"");
	if(bmi>=18.5 && bmi<25)
	printf("\"You have normal weight\"");
	if(bmi>=25 && bmi<30)
	printf("\"Obesity (1st-degree)\"");
	if(bmi>=30 && bmi<35)
	printf("\"Obesity (2nd-degree)\"");
	if(bmi>=35 && bmi<40)
	printf("\"Obesity (3rd-dergree)\"");
	if(bmi>=40)
	printf("\"Obesity (4th-degree)\"");
	return 0; }