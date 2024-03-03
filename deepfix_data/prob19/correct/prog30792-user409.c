#include <stdio.h>
int main()
{float h ;
 float w;
 float BMI;
 scanf("%f %f",&h,&w);
 BMI=(w*100*100)/(h*h);
 if(BMI<18.5){
     printf("%.2f m, %.2f kg:\nBMI = %.2f",h/100,w,BMI);
     printf("\nYou have low weight"); }
 if(BMI>=18.5&&BMI<25){
     printf("%.2f m, %.2f kg:\nBMI = %.2f",h/100,w,BMI);
     printf("\nYou have normal weight"); }
 if(BMI>=25&&BMI<30){
     printf("%.2f m, %.2f kg:\nBMI = %.2f",h/100,w,BMI);
     printf("\nObesity (1st-degree)"); }
 if(BMI>=30&&BMI<35){
     printf("%.2f m, %.2f kg:\nBMI = %.2f",h/100,w,BMI);
     printf("\nObesity (2nd-degree)"); }
 if(BMI>=35&&BMI<40){
     printf("%.2f m, %.2f kg:\nBMI = %.2f",h/100,w,BMI);
     printf("\nObesity (3rd-degree)"); }
 if(BMI>=40){
     printf("%.2f m, %.2f kg:\nBMI = %.2f",h/100,w,BMI);
     printf("\nObesity (4th-degree)"); }
	return 0; }