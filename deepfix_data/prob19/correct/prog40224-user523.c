#include <stdio.h>
int main() {
	float height,weight, BMI;
	scanf("%f %f",&height,&weight);
	height=height/100;
	BMI=(weight)/((height)*(height));
	if(BMI<18.5)
	printf("%.2f m, %.2f kg: BMI = %.2f\nYou have low weight",height,weight,BMI);
	else if(BMI>=18.5&&BMI<25)printf("%.2f m, %.2f kg: BMI = %.2f\nYou have normal weight",height,weight,BMI);
	else if(BMI>=25&&BMI<30)printf("%.2f m, %.2f kg: BMI = %.2f\nObesity (1st-degree)",height,weight,BMI);
	else if(BMI>=30&&BMI<35)printf("%.2f m, %.2f kg: BMI = %.2f\nObesity (2nd-degree)",height,weight,BMI);
	else if(BMI>=35&&BMI<40)printf("%.2f m, %.2f kg: BMI = %.2f\Obesity (3rd-degree)n",height,weight,BMI);
	else if(BMI>=40)printf("%.2f m, %.2f kg: BMI = %.2f\nObesity (4th-degree)",height,weight,BMI);
	return 0; }