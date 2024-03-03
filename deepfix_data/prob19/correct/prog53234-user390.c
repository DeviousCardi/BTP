#include <stdio.h>
int main() {
    float hig,weg;
    float bmi;
    float hig1;
    printf("please enter the height and weight\n");
    scanf("%f%f",&hig,&weg);
     hig1=hig/10;
    printf("the height and weight are %f and %f\n",hig1,weg);
    bmi=weg/(hig*hig);
    hig1=hig/10;
    bmi=weg/(hig1*hig1);
    printf("%f",bmi);
if(bmi<18.5) {
    printf("you have low weight\n"); }
if(bmi>=18.5 && bmi<25) {
    printf("you have normal weight\n"); }
if(bmi>=25 && bmi<30) {
    printf("Obesity//(1st-degree)"); }
if(bmi>=30 && bmi<35) {
    printf("Obesity//(2nd-degree)"); }
if(bmi>=35 && bmi<40) {
    printf("obesity//(3rd-degree)"); }
if(bmi>=40) {
    printf("obesity//(4th-degree)"); }
	return 0; }