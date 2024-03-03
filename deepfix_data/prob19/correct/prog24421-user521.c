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
	return 0; }