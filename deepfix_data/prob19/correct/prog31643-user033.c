#include <stdio.h>
int main() {
	float height,weight;
	float BMI;
	float z;
	scanf("%f %f", &z, &weight);
	height = z/100;
	BMI = (weight/(height*height));
	printf("%.2f, %.2f: BMI = %.2f\n", height, weight, BMI);
	if(BMI < 18.5)  {
	    printf("You have low weight."); }
	if((BMI>=18.5)&&(BMI<25)) {
	    printf("You have normal weight."); }
	if((BMI>=25)&&(BMI<30))  {
	    printf("Obesity(1st-degree)"); }
	if((BMI>=30)&&(BMI<40))   {
	     printf("Obesity(2nd-degree)"); }
	if(BMI>=40) {
	    printf("Obesity_4th-degree)"); }
	return 0; }