#include <stdio.h>
int main() {
    float cm,m,w,bmi;
    scanf("%f %f",&cm,&w);
    m=cm/100;
        bmi=w/(m*m);
    printf("%0.2f m, %0.2f kg: BMI=%.2f\n",m,w,bmi);
	if(bmi<18.5){
	    printf("You have low weight"); }
	if(bmi<25 && bmi>=18.5){
	    printf("You have normal weight"); }
	if(bmi<30 && bmi>=25){
	    printf("Obesity (1st-degree)"); }
	if(bmi<35 && bmi>=30){
	    printf("Obesity (2nd-degree)"); }
	if(bmi<40 && bmi>=35){
	    printf("Obesity (3rd-degree)"); }
	if(bmi>=40){
	    printf("Obesity (4th-degree)"); }
	return 0; }