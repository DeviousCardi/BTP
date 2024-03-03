#include <stdio.h>
int main() {
	float bmi,h,w,h;
	scanf("%f %f",&h,&w);
	H = h/100;
	bmi=(w)/(H*H);
	printf("%.2fm, %.2fkg: BMI=%f",H,w,bmi);
	if (bmi < 18.5)
	{ printf("You have low weight");}
	else if ((bmi >= 18.5) && (bmi < 25))
	{ printf("You have normal weight");}
	else if ((bmi >= 25) && (bmi < 30))
	{ printf("obesity (1st degree)");}
	else if ((bmi >= 30) && (bmi < 35))
	{ printf("obesity (2nd degree)");}
	else if ((bmi >= 35) && (bmi < 40))
	{ printf("obesity (3rd degree)");}
	else if ((bmi >= 40)
	{ printf("obesity (4th degree)");}
	return 0; }