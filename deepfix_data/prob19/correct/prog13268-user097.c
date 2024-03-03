#include <stdio.h>
int main() {
    float h,w;
    scanf("%f %f",&h,&w);
    float height=h/100;
    printf("%.2f m, %.2f kg: BMI=%.2f\n",height,w,w/(height*height));
    float bmi=w/(height*height);
    if(bmi<18.5)
    printf("You have low weight");
    else if(bmi>=18.5 && bmi<25)
    printf("You have normal weight");
    else if(bmi>=25 && bmi<30)
    printf("Obesity (1st-degree)");
    else if(bmi>=30 && bmi<35)
    printf("Obesity (2st-degree)");
    else if(bmi>=35 && bmi<40)
    printf("Obesity (3rd-degree)");
    else
    printf("Obesity (4th-degree)");
	return 0; }