#include <stdio.h>
int main()
{float h;
 float w;
 float BMI;
 scanf("%f %f",&h,&w);
 BMI=w/h*h;
 if(BMI<18.5){
     printf("%f m,%.2f kg,\:BMI=%.2f",h,w,BMI);
     printf("\nYou have low weight"); }
 if(BMI>=18.5&&BMI<25){
     printf("%4.2f m,%.2f kg,\:BMI=%.2f",h,w,BMI);
     printf("\nYou have normal weight"); }
 if(BMI>=25&&BMI<30){
     printf("%4.2f m,%.2f kg,\:BMI=%.2f",h,w,BMI);
     printf("\nObesity\(1st-degree\)"); }
 if(BMI>=30&&BMI<35){
     printf("%4.2f m,%.2f kg,\:BMI=%.2f",h,w,BMI);
     printf("\nObesity\(2nd-degree\)"); }
 if(BMI>=35&&BMI<40){
     printf("%4.2f m,%.2f kg,\:BMI=%.2f",h,w,BMI);
     printf("\nObesity\(3rd-degree\)"); }
 if(BMI>=40){
     printf("%4.2f m,%.2f kg,\:BMI=%.2f",h,w,BMI);
     printf("\nObesity\(4th-degree\)"); }
	return 0; }