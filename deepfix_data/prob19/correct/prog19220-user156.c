#include <stdio.h>
int main() {
    float hc,w,hm;
    float bmi;
    scanf("%f",&hc);
    scanf("%f",&w);
    hm=hc/100.0;
    bmi=w/(hm*hm);
    printf("%.2f m, %.2fkg:BMI=%.2f\n",hm,w,bmi);
    if(bmi<18.5)
    printf("You have low weight");
    else if(bmi>=18.5&&bmi<25)
    printf("You have normal weight");
    else if(bmi>=25&&bmi<30)
    printf("Obesity(1st-degree)");
     else if(bmi>=30&&bmi<35)
    printf("Obesity(2nd-degree)");
     else if(bmi>=35&&bmi<40)
    printf("Obesity(3rd-degree)");
     else if(bmi>=40)
    printf("Obesity(4st-degree)");
    	return 0; }