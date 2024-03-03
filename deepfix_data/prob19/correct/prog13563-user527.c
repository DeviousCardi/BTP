#include <stdio.h>
int main() {
	float h,w;
	scanf("%f%f",&h,&w);
	h=h/100;
	float BMI=h/(w*w);
	printf("%.2fm, %.2fkg: BMI=%.2f\n",h,w,BMI);
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
	 else
	    printf("Obesity (4th-degree)");
	return 0; }