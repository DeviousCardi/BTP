#include <stdio.h>
int main() {
    float height, weight, BMI;
	scanf("%f", &height);
	scanf("%f", &weight);
	height/=100;
	BMI=weight/(height*height);
	printf("%.2f m, %.2f kg: BMI = %.2f", height, weight, BMI);
	if(BMI<18.5)
	    printf("You have low weight");
	else if(BMI<25)
	    printf("You have normal weight");
	else if(BMI<30)
	    printf("Obesity (1st-degree)");
	else if(BMI<35)
	    printf("Obesity (2nd-degree)");
	else if(BMI<40)
	    printf("Obesity (3rd-degree)");
	else
	    printf("Obesity (4th-degree)");
	return 0; }