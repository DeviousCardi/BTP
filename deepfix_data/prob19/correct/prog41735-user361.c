#include <stdio.h>
int main() {
float h,w,bmi;
scanf("%.2f%.2f",&h,&w);
h=1.0;
w=1.0;
bmi=w/(h*h);
if(bmi<18.5){
    printf("%.2f%.2f%.2f\n",h,w,bmi);
    printf("you hve low weight"); }
else if((bmi>=18.5)&&(bmi<25)){
    printf("%.2f%.2f%.2f\n",h,w,bmi);
    printf("you have normal weight"); }
else if((bmi>=25)&&(bmi<30)){
     printf("%.2f%.2f%.2f\n",h,w,bmi);
     printf("obesity(1st-degree)"); }
else if((bmi>=30)&&(bmi<35)){
       printf("%.2f%.2f%.2f\n",h,w,bmi);
       printf("obesity(2nd-degree)"); }
else if((bmi>=35)&&(bmi<40)){
      printf("%.2f%.2f%.2f\n",h,w,bmi);
      printf("obesity(3rd-degree)"); }
else{
      printf("%.2f%.2f%.2f\n",h,w,bmi);
      printf("obesity(4th-degree)"); }
  return 0; }