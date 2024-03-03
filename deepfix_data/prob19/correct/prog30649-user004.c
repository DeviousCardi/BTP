#include <stdio.h>
int main() {
	float BMI,height,weight;
	scanf("%f%f",&height,&weight);
	BMI=weight/(height*height);
	printf("%0.2f m,%0.2f kg:\n",height,weight);
	printf("BMI=%0.2f\n",BMI);
	if(BMI<18.5){
	    printf("You have low weight"); }
	else if(BMI<25,BMI>=18.5){
	    printf("You have normal weight"); }
	else if(BMI<30,BMI>=25){
	    printf("Obesity(1st-degree)"); }
	else if(BMI<35,BMI>=30){
	    printf("Obesity(2nd-degree)"); }
	else if(BMI<40,BMI>=35){
	    printf("Obesity(3rd-degree)"); }
	else if(BMI>=40){
	    printf("Obesity(4th-degree)"); }
	return 0; }