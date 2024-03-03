#include <stdio.h>
int main() {
    float h,w;
    scanf("%f%f",&h,&w);
while(h!=0&&w!=0) {
    float h1=h/100.0;
    float bmi=(float)(w)/(h1*h1);
    printf("%.2f m, %.2f kg: BMI = %.2f\n",h1,w,bmi);
    if(bmi<18.5) {
        printf("You have low weight\n"); }
    else if(bmi>=18.5&&bmi<25) {
        printf("You have normal weight\n"); }
    else if(bmi>=25&&bmi<30) {
        printf("Obesity (1st-degree)\n"); }
    else if(bmi>=30&&bmi<35) {
        printf("Obesity (2nd-degree)\n"); }
    else if(bmi>=35&&bmi<40) {
        printf("Obesity (3rd degree)\n"); }
    else {
        printf("Obesity (4th degree)\n"); }
    h=0;
    w=0; }
	return 0; }