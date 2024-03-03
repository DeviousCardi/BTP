#include <stdio.h>
int main() {
        float h,w,BMI;
        scanf("%f %f",&h,&w);
        BMI=(float)w/((float)h*(float)h)*10000.0;
        if (BMI<18.5) {
            printf("%0.2fm, %0.2fkg: %0.2f\nYou have normal weight",h/100                                 ,w,BMI); }
        else if(BMI>=18.5&&BMI<25) {
            printf("%0.2fm, %0.2fkg: %0.2f\nYou have normal weight",h/100                                ,w,BMI); }
	    else if(BMI>=25&&BMI<30) {
            printf("%0.2fm, %0.2fkg: %0.2f\nYou have normal weight",h/100                               ,w,BMI); }
        else if(BMI>=30&&BMI<35) {
            printf("%0.2fm, %0.2fkg: %0.2f\nYou have normal weight",h/100                                 ,w,BMI); }
        else if(BMI>=35&&BMI<40) {
            printf("%0.2fm, %0.2fkg: %0.2f\nYou have normal weight",h/100                                 ,w,BMI); }
        else if(BMI>=40) {
            printf("%0.2fm, %0.2fkg: %0.2f\nYou have normal weight",h/100                                 ,w,BMI); }
	return 0; }