#include <stdio.h>
int main() {
	float hcm, w;
	scanf("%f %f",&hcm,&w);
	float h=hcm/100.0, bmi;
	bmi=w/(h*h);
	printf("%.2f m, %.2f kg: BMI = %.2f \n",h,w,bmi);
	if(bmi<18.5) {
	    printf("You have low weight"); }
	else {
	    if(bmi<25) {
	        printf("You have normal weight"); }
	    else {
	        if(bmi<30) {
	            printf("Obesity (1st-degree)"); }
	        else {
	            if(bmi<35) {
	                printf("Obesity (2nd-degree)"); }
	            else {
	                if(bmi<40) {
	                    printf("Obesity (3rd-degree)"); }
	                else {
	                    printf("Obesity (4th-degree)"); } } } } }
	return 0; }