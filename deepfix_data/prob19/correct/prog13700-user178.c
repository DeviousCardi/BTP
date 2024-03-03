#include <stdio.h>
int main() {
    float hcm,w;
    scanf("%f %f",&hcm,&w);
    float hm=hcm/100.0;
	float bmi=(w/(hm*hm));
	printf("%.2f m, %.2f kg: BMI = %.2f\n",hm,w,bmi);
	if(bmi<18.5)
	printf("You have low weight");
	else if(bmi>=18.5&&bmi<25)
	printf("You have normal weight");
	else if(bmi>=25&&bmi<30)
	printf("Obesity (1st-degree)");
	else if(bmi>=30&&bmi<35)
	printf("Obesity (2nd-degree)");
	else if(bmi>=35&&bmi<40)
	printf("Obesity (3rd-degree)");
	else
	printf("Obesity (4th-degree)");
	return 0; }