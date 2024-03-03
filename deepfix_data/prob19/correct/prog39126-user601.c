#include <stdio.h>
int main() {
    float h,w,bmi,h1;
    scanf("%f%f",&h,&w);
h1=h/100;
    bmi=w/(h1*h1);
    printf("%.2f %.2f  %.\n",h1,w,bmi);
    if(bmi<18.5) {
        printf("You have low weight"); }
    else if(bmi>=18.5&&bmi<25) {
        printf("You have normal weight"); }
    else if(bmi>=25&&bmi<30) {
        printf("Obesity (1st-degree"); }
    else if(bmi>=30&&bmi<35) {
        printf("Obesity (2nd-degree"); }
    else if(bmi>=35&&bmi<40) {
        printf("Obesity (3rd-degree"); }
    else if (bmi>=40) {
        printf("Obesity (4th-degree"); }
    else {
        printf(""); }
    return(0); }