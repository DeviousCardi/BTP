#include <stdio.h>
int main() {
    float hig,weg;
    float bmi;
    printf("please enter the height and weight\n");
    scanf("%f%f",&hig,&weg)
    printf("the height and weight are %fand %fn",hig,weg);
    bmi=weg/(hig*hig);
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