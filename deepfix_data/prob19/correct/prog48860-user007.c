#include <stdio.h>
int main() {
	float bmi,h,w;
	scanf("%f%f",&h,&w);
	h/=100;
	bmi=(w/(h*h));
	if(bmi<18.5)
	printf("%.2f m, %.2f kg: BMI = %.2f\nYou have low weight",h,w,bmi);
	else if(bmi>=18.5&&bmi<25)
	printf("%.2f m, %.2f kg: BMI = %.2f\nYou have normal weight",h,w,bmi);
	else if(bmi>=25&&bmi<30)
	printf("%.2f m, %.2f kg: BMI = %.2f\nObesity (1st-degree)",h,w,bmi);
	else if(bmi>=30&&bmi<35)
    printf("%.2f m, %.2f kg: BMI = %.2f\nObesity (2nd-degree)",h,w,bmi);
	else if(bmi>=35&&bmi<40)
	printf("%.2f m, %.2f kg: BMI = %.2f\nObesity (3rd-degree)",h,w,bmi);
	else
	printf("%.2f m, %.2f kg: BMI = %.2f\nObesity (4th-degree)",h,w,bmi);
	return 0; }