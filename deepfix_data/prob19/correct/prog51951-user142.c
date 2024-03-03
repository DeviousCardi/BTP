#include <stdio.h>
int main() {
	float h,w,bmi,m;
	scanf("%f%f",&h,&w);
	m=h/100;
	bmi=w/(m*m);
	printf("%.2f m, %.2f kg: bmi = %.2f\n",m,w,bmi);
	if(bmi<18.5)
	printf("you have low weight");
	if(bmi>=18.5 && bmi<25)
	printf("you have normal weight");
	if(bmi>=25 && bmi<30)
	printf("obesity (1st-degree)");
	if(bmi>=30 && bmi<35)
	printf("obesity (2nd-degree)");
	if(bmi>=35 && bmi<40)
	printf("obesity (3rd-degree)");
	if(bmi>=40)
	printf("obesity (4th-degre)");
	return 0; }