#include <stdio.h>
int main() {
    float hc,w,hm;
    float bmi;
    scanf("%f",&hc);
    scanf("%f",&w);
    hm=hc/100.0;
    bmi=w/(hm*hm);
    printf("%.2f m, %.2fkg:BMI=%.2f",hm,w,bmi);
    if(bmi<18.5)
    printf("You have");
	return 0; }