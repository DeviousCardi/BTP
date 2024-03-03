#include <stdio.h>
int main() {
    float  height,weight,BMI,h2;
    scanf("%f%f",&height,&weight);
    h2=height/100;
    BMI=(weight)/(h2*h2);
    printf("%.2f",h2);
    printf(" m");
    printf(",");
    printf("%.2f",weight);
    printf(" kg");
    printf("\:");
    printf(" BMI=%.2f",BMI);
    if(BMI<18.5) {
        printf("\nYou have low weight"); }
    else if ((BMI>=18.5)&&(BMI<25)) {
        printf("\nYou have normal weight"); }
    else if((BMI>=25)&&(BMI<30)) {
        printf("\nObesity(1st-degree)"); }
    else if((BMI>=30)&&(BMI<35)) {
        printf("\nObesity(2nd-degree)"); }
	else if((BMI>=35)&&(BMI<40)) {
	    printf("\nObesity(3rd-degree)"); }
	else {
	    printf("\nObesity(4th-degree)"); }
	return 0; }