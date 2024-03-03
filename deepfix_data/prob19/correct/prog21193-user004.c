#include <stdio.h>
int main() {
	float BMI,height,weight;
	scanf("%f%f",&height,&weight);
	BMI=(weight*10000)/(float)(height*height);
	printf("%0.2f m, %0.2f kg:",height/(float)100,weight);
	printf("BMI = %0.2f\n",BMI);
	if(BMI<18.5){
	    printf("You have low weight"); }
	else if(BMI<25){
	    if(BMI>=18.5){
	    printf("You have normal weight"); } }
	else if(BMI<30){
	   if(BMI>=25){
	     printf("Obesity (1st-degree)"); } }
	else if(BMI<35){
	    if(BMI>=30){
	     printf("Obesity (2nd-degree)"); } }
	else if(BMI<40){
	    if(BMI>=35){
	     printf("Obesity (3rd-degree)"); } }
	else if(BMI>=40){
	    printf("Obesity (4th-degree)"); }
	return 0; }