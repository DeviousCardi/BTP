#include <stdio.h>
int main(){
    float h,H,w,BMI;
    scanf("%f%f",&h,&w);
    H=h/100.0;
    BMI== w/H*H;
    printf("%fm,%fkg:BMI=%f\n",H,w,BMI);
    if(BMI<18.5)
    printf("You have low weight");
    if(18.5<=BMI<25)
    printf("You have normal weight");
    if(25<=BMI<30)
    printf("Obesity(1st-degree)");
    if(30<=BMI<35)
    printf("Obesity(2nd-degree)");
    if(35<=BMI<40)
    printf("Obesity(3rd-degree)");
    else
    printf("Obesity(4th-degree)");
	return 0; }