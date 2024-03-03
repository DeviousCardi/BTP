#include <stdio.h>
int main() {
    int w;
    float hm,BMI,hc;
    scanf("%d %d\n",&hc,&w);
    hm=hc/100;
    BMI=w/(hm*hm);
    printf("%.2fm, %.2fkg:BMI=%.2f\n",hm,w,BMI);
    if((BMI>=18.5)){
    if((BMI>=18.5)&&(BMI<25))
        printf("You have normal weight");
    if((BMI>=25)&&(BMI<30))
    printf("Obesity(1st-degree)");
    if((BMI>=30)&&(BMI<35))
    printf("Obesity(2nd-degree)");
    if((BMI>=35)&&(BMI<40))
    printf("Obesity(3rd-degree)");
    if(BMI>=40)
    printf("Obesity(4th-degree)"); }
	else{
	    printf("You have low weight"); }
	return 0; }