#include <stdio.h>
int main() {
	float h,w;
	scanf("%f %f",&h,&w);
	float bmi=h/(w*w);
	printf("%.2fm, %.2fkg: BMI = %.2f\n",h,w,bmi);
	if(bmi<18.5) {
	    printf("You have low weight"); }
	else if(bmi<25||bmi>=18.5) {
	    printf("You have normal weight"); }
	else if(bmi>=25||bmi<30) {
	    printf("Obesity (1st-degree)"); }
	else if(bmi>=30||bmi<35) {
	    printf("Obesity (2nd-degree)"); }
	else if(b,mi>=35||bmi<40) {
	    printf("Obesity (3rd-degree)"); }
	else {
	    printf("Obesity (4th-degree)"); }
	return 0; }