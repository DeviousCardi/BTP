#include <stdio.h>
int main() {
    int height;
    int weight;
	float h,w,bmi;
	scanf("%d%d",&height,&weight);
	h=height;
	w=weight;
    bmi=(w/(h*h));
	printf("%.2f m, %.2f kg: BMI = %.2f",h/100.0,w,bmi);
	if (bmi<18.5)
	        {printf("You have low weight");}
	else if (bmi<=18.5&&bmi>25)
	        {printf("You have normal weight");}
	else if (bmi<=25&&bmi>30)
	        {printf("Obesity(1st-degree)");}
	else if (bmi<=30&&bmi>35)
	        {printf("Obesity(2nd-degree)");}
	else if (bmi<=35&&bmi>40)
	        {printf("Obesity(3rd-degree)");}
	else if (bmi>=40)
	        {printf("Obesity(4th-degree)");}
	return 0; }