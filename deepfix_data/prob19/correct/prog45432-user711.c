#include <stdio.h>
int main() {
	float h,w,bmi;
	scanf("%f",&h);
	scanf("%f",&w);
	bmi=w/(h*h);
	if(bmi<18.5){
	    printf("%.2fm, %.2fkg: BMI=%.2f\n",h,w,bmi);
	    printf("You have low weight"); }
	if((bmi>=18.5)&&(bmi<25)){
	    printf("%.2fm, %.2fkg: BMI=%.2f\n",h,w,bmi);
	    printf("You have normal weight"); }
	if((bmi>=25)&&(bmi<30)){
	    printf("%.2fm, %.2fkg: BMI=%.2f\n",h,w,bmi);
	    printf("Obesity(1st-degree)"); }
	if((bmi>=30)&&(bmi<35)){
	    printf("%.2fm, %.2fkg: BMI=%.2f\n",h,w,bmi);
	    printf("Obesity(2nd-degree)"); }
	if((bmi>=35)&&(bmi<40)){
	    printf("%.2fm, %.2fkg: BMI=%.2f\n",h,w,bmi);
	    printf("Obesity(3rd-degree)"); }
	if(bmi>=40){
	    printf("%.2fm, %.2fkg: BMI=%.2f\n",h,w,bmi);
	    printf("Obesity(4th-degree)"); }
	return 0; }