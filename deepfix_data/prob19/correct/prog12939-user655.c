#include <stdio.h>
int main() {
    float h1,w;
    scanf("%f %f",&h1,&w);
    float h2=(h1/100);
    float bmi=w/(h2*h2);
    printf("%.2fm,%.2fkg:BMI=%.2f\n",h2,w,bmi);
    if(bmi<18.5){printf("You have low weight");}
    if((bmi>=18.5)&&(bmi<25)){printf("You have normal weight");}
    if((bmi>=25)&&(bmi<30)){printf("Obesity(1st degree)");}
    if((bmi>=30)&&(bmi<35)){printf("Obesity(2nd degree)");}
    if((bmi>=35)&&(bmi<40)){printf("Obesity(3rd degree)");}
    if(bmi>=40){printf("Obesity(4th degree)");}
	return 0; }