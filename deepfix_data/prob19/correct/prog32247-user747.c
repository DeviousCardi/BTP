#include <stdio.h>
int main() {
	float heightm, weight, heightcm;
	float BMI;
	scanf("%f %f", &heightcm, &weight);
	heightm=heightcm/100;
		BMI=weight/(heightm*heightm);
	printf("%0.2f m, %0.2f kg: BMI=%0.2f\n", heightm, weight, BMI);
	if(BMI<18.5){
	    printf("You have low weight"); }
	else if((BMI>=18.5) && (BMI<25)){
	    printf("You have normal weight"); }
	else if((BMI>=25) && (BMI<30)){
	    printf("Obesity \(1st-degree\)\ "); }
	else if((BMI>=30) && (BMI<35)){
	    printf("Obesity \(2nd-degree\)\ "); }
	else if((BMI>=35) && (BMI<40)){
	    printf("Obesity \(3rd-degree\)\ "); }
	else if(BMI>=40){
	    printf("Obesity \(4th-degree\)\ "); }
	return 0; }