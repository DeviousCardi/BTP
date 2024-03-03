#include <stdio.h>
int main() {
    float h,H,wt,BMI;
    scanf("%f%f",&h,&wt);
    H = h/100.0;
    printf("%.2f m,%.2f kg: ",H,wt);
    BMI= wt/(H*H);
    printf("BMI=%.2f\n",BMI);
    if(BMI<18.5)
    printf("You have low weight");
    else if(BMI>=18&&BMI<25)
    printf("You have normal weight");
    else if(BMI>=25 && BMI<30)
    printf("Obesity(1st-degree)");
    else if(BMI>=30 &&BMI<35)
    printf("Obesity (2nd-degree)");
    else if(BMI>=35 && BMI<40)
    printf("Obesity (3rd-degree)");
    else if(BMI>=40)
    printf("Obesity (4th-degree)");
	return 0; }