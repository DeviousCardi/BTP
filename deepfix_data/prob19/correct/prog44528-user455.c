#include <stdio.h>
int main() {
        float h,w,BMI;
        scanf("%f %f",&h,&w);
        BMI=(float)w/((float)h*(float)h)*10000.0;
        if (BMI<18.5) {
            printf("%0.2f m, %0.2f kg: BMI = %0.2f\nYou have low weight",h/100,w,BMI); }
        else if(BMI>=18.5&&BMI<25) {
            printf("%0.2f m, %0.2f kg: BMI = %0.2f\nYou have normal weight",h/100,w,BMI); }
	    else if(BMI>=25&&BMI<30) {
            printf("%0.2f m, %0.2f kg: BMI = %0.2f\nObesity (1st-degree)",h/100,w,BMI); }
        else if(BMI>=30&&BMI<35) {
            printf("%0.2f m, %0.2f kg: BMI = %0.2f\nObesity (2nd-degree)",h/100,w,BMI); }
        else if(BMI>=35&&BMI<40) {
            printf("%0.2f m, %0.2f kg: BMI = %0.2f\nObesity (3rd-degree )",h/100,w,BMI); }
        else if(BMI>=40) {
            printf("%0.2f m, %0.2f kg: BMI = %0.2f\nObesity (4th-degree)",h/100,w,BMI); }
	return 0; }