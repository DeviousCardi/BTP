#include <stdio.h>
int main(){
float h,w;
scanf("%f%f",&h,&w);
float H=h*h;
float BMI=(w*10000)/H;
printf("%.2f m, ",h/100);
printf("%.2f kg: ",w);
if (BMI<18.5){
    printf("BMI = %.2f\n You have low weight",BMI);
    }else if (18.5=<BMI<25){
            printf("BMI = %.2f\n You have normal weight",BMI);
        }else if (25=<BMI<30){
                printf("BMI = %.2f\n Obesity (1st-degree)",BMI);
            }else (30=<BMI<35){
                printf("BMI = %.2f\n Obesity (2nd-degree)",BMI);
return 0; }