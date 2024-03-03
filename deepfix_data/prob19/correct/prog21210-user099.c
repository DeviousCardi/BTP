#include <stdio.h>
int main() {
    float h,W,BMI;
    scanf ("%f%f",&h,&W);
    BMI=W/(100*h*h);
    printf("%.2fm, %.2fkg: BMI=%.2f\n",h/100,W,BMI);
    if(BMI<18.5)printf("You have low weight");
    else if(BMI<25)printf("You have normal weight");
    else if(BMI<30)printf("Obesity(1st-degree)");
    else if(BMI<35)printf("Obesity(2nd-degree)");
    else if(BMI<40)printf("Obesity(3rd-degree)");
    else printf("Obesity(4th-degree)");
	return 0; }