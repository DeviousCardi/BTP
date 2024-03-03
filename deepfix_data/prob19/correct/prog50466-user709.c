#include <stdio.h>
int main() {
    float h,wt,BMI;
    scanf("%f%f",&h,&wt);
    printf("%.2fm\,%.2fkg:",h,wt);
    BMI= wt/(h*h);
    if(BMI<18.5)
    printf("You have low weight");
    else if(BMI>=18&&BMI<25)
    printf("You have normal weight");
    else if(BMI>=25 && BMI<30)
    printf("Obesity(1st-degree)");
    else if(BMI>=30 &&BMI<35)
    printf("Obesity(2nd-degree)");
    else if(BMI>=35 && BMI<40)
    printf("Obesity(3rd-degree");
    else if(BMI>=40)
    printf("Obesity(4th-degree");
	return 0; }