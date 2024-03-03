#include <stdio.h>
int main()
{float h,w,BMI;
scanf("%f %f",&h,&w);
BMI=(w*100*100)/(h*h);
h=h/100;
if(BMI<18.5){
    printf("%.2f m, %.2f kg: BMI = %.2f \nYou have low weight ",h,w,BMI);
}else
if((BMI>=18.5)||(BMI<25))
printf("%.2f m, %.2f kg: BMI = %.2f\nYou have normal weight",h,w,BMI);
else
if((BMI>=25)||(BMI<30)) {
printf("%.2f m, %.2f kg: BMI = %.2f\nObesity (1st-degree)",h,w,BMI); }
else
if((BMI>=30)||(BMI<35)){
printf("%.2f m, %.2f kg: %.2f\nObesity (2nd degree)",h,w,BMI); }
else {
if((BMI>=35||BMI<40)){
printf("%.2f m, %.2f kg: BMI = %.2f\nObesity (3rd-degree)",h,w,BMI);}
else {
if(BMI>=40) {
printf("%.2f m, %.2f kg: BMI = %.2f\nObesity (4th-degree)",h,w,BMI); } } }
   return 0;}