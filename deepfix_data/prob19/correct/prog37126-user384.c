#include <stdio.h>
int main() {
    float h,w,bmi;
    scanf("%f %f",&h,&w);
    bmi=(10000)*w/(h*h);
    printf("%.2fm, %.2f\nkg:BMI=%.2f\n",h/100,w,bmi);
    if(bmi<18.5)
    printf("You have low\nweight");
	else
	if(18.5<=bmi && bmi<25)
	printf("You have normal\nweight");
	else
		if(25<=bmi && bmi<30)
			printf("Obesity\n(1st-degree)");
	else
	if(30<=bmi<35)
	printf("obesity\n(2nd-degree)");
	else
	if(35<=bmi<40)
	printf("Obesity (3rd-degree)");
	else
	printf("Obesity (4th-degree)");
	return 0; }