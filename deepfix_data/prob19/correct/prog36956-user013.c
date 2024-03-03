#include <stdio.h>
int main(){
    float h,w;
    scanf("%f",&h);
    scanf("%f",&w);
    printf("%.2f,",h/100.0);
    printf("%.2f:",w);
    float BMI;
    BMI=(w*100.0*100.0)/(h*h);
    printf("BMI=%.2f\n",BMI);
    if(BMI<18.5){
      printf("You have low weight"); }
    if(BMI>=18.5&&BMI<25){
      printf("You have normal weight"); }
    if(BMI>=25&&BMI,30){
      printf("Obesity(1st-degree)"); }
	return 0; }