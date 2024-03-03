#include <stdio.h>
int main() {
    float BMI,height,weight,hm;
	scanf("%f%f",&height,&weight);
	hm=height/100;
	BMI=weight/(hm*hm);
	printf("%.2f m, %.2f kg: BMI = %.2f\n",hm,weight,BMI);
	if(BMI<18.5)
	printf("You have low weight");
	else if(BMI>=18.5&&BMI<25)
	printf("You have normal weight");
	else if(BMI>=25&&BMI<30)
	printf("Obesity(1st-degree)");
	else if(BMI>=30&&BMI<35)
	printf("Obesity(2nd-degree)");
	else if(BMI>=35&&BMI<40)
	printf("Obesity(3rd-degree)");
	else
	printf("Obesity(4th-degree)");
	return 0; }