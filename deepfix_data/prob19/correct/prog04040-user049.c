#include <stdio.h>
int main(){
float h,w;
scanf("%f%f",&h,&w);
float H=h*h;
float BMI=(w*10000)/H;
printf("%.2f m, ",h/100);
printf("%.2f kg: ",w);
if (BMI<18.5){
    printf("BMI = %.2f\nYou have low weight",BMI);
    }else if (18.5<=BMI<25){
            printf("BMI = %.2f\nYou have normal weight",BMI);
        }else if (25<=BMI<30){
                printf("BMI = %.2f\nObesity (1st-degree)",BMI);
            }else if (30<=BMI<35){
                printf("BMI = %.2f\nObesity (2nd-degree)",BMI);
            }else if (35<=BMI<40){
                printf("BMI = %.2f\nObesity (3rd-degree)",BMI);
            }else if (40<=BMI){
                printf("BMI = %.2f\nObesity (4rd-degree)",BMI); }
            return 0; }