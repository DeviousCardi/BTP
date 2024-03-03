#include <stdio.h>
int main() {
float t,h,w,bmi;
scanf("%f%f",&h,&w);
t=h/100.0;
bmi=w/(t*t);
if(bmi<18.5){
    printf("%.2f m, %.2f kg: BMI = %.2f\n",t,w,bmi);
    printf("You have low weight"); }
else if((bmi>=18.5)&&(bmi<25)){
    printf("%.2f m, %.2f kg: BMI = %.2f\n",t,w,bmi);
    printf("You have normal weight"); }
else if((bmi>=25)&&(bmi<30)){
     printf("%.2f m, %.2f kg: BMI = %.2f\n",t,w,bmi);
     printf("Obesity (1st-degree)"); }
else if((bmi>=30)&&(bmi<35)){
       printf("%.2f m, %.2f kg: BMI = %.2f\n",t,w,bmi);
       printf("Obesity (2nd-degree)"); }
else if((bmi>=35)&&(bmi<40)){
      printf("%.2f m, %.2f kg: BMI = %.2f\n",t,w,bmi);
      printf("Obesity (3rd-degree)"); }
else{
      printf("%.2f m, %.2f kg: BMI = %.2f\n",t,w,bmi);
      printf("Obesity (4th-degree)"); }
  return 0; }