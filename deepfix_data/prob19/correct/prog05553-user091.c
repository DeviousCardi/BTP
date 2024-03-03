#include <stdio.h>
int main(){
    float h;
    float w;
    scanf("%f%f",&h,&w);
    float H=h/100;
    float BMI=(w)/(H*H);
    printf("%.2fm,%.2fkg:",H,w);
    printf("BMI = %.2f\n",BMI);
    if(BMI<18.5){printf("You have low weight");}
    else if(18.5<=BMI&&BMI<25){printf("You have normal weight");}
    else if(25<=BMI&&BMI<30){printf("Obesity(1st-degree)");}
    else if(30<=BMI&&BMI<35){printf("Obesity(2nd-degree)");}
    else if(35<=BMI&&BMI,40){printf("Obesity(3rd-degree)");}
    else if(BMI>=40){Printf("Obesity(4th-degree)");}
	return 0; }