#include <stdio.h>
int main() {
	float h,w,t;
	float BMI;
	scanf("%f",&h);
	scanf("%f",&w);
	t=h/100;
	BMI=w/t*t;
	if(BMI<18.5){
	    printf("%.2f m, %.2f kg: BMI= %.2f\n",t,w,BMI);
	    printf("You have low weight"); }
	else if(BMI>18.5||BMI<25){
	     printf("%.2f m, %.2f kg: BMI= %.2f\n",t,w,BMI);
	    printf("You have normal weight"); }
	else if(BMI>25||BMI<30){
	     printf("%.2fm %.2fkg: BMI= %.2f\n",t,w,BMI);
	    printf("Obesity(1st-degree)"); }
	else if(BMI>30||BMI<35){
	     printf("%.2f m, %.2f kg: BMI= %.2f\n",t,w,BMI);
	    printf("Obesity(2nd-degree)"); }
	else if(BMI>35||BMI<40){
	     printf("%.2f m, %.2f kg: BMI= %.2f\n",t,w,BMI);
	    printf("Obesity(3rd-degree)"); }
	else if(BMI>=40){
	     printf("%.2f m, %.2f kg: BMI= %.2f\n",t,w,BMI);
	    printf("Obesity(4th-degree)"); }
	return 0; }