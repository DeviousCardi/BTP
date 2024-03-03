#include <stdio.h>
int main()
{float h,w,BMI;
scanf("%f %f",&h,&w);
BMI=(w*100*100)/(h*h);
h=h/100;
if(BMI<18.5){
    printf("height%.2f weight%.2f BMI%.2f\n\"You have low weight"\",h,w,BMI); }
else{
    if((BMI>=18.5||BMI<25)){printf("height%.2f weight%.2f BMI%.2f\n\"You have normal weight"\",h,w,BMI);}
if((BMI>=25||BMI<30)){printf("height%.2f weight%.2f BMI%.2f\n\"Obesity (ist-degree)"\",h,w,BMI);}
if((BMI>=30||BMI<35)){printf("height%.2f weight%.2f BMI%.2f\n\"Obesity (2nd-degree"\",h,w,BMI);}
if((BMI>=35||BMI<40)){printf("height%.2f weight%.2f BMI%.2f\n\"Obesity (3rd-degree)"\",h,w,BMI);}
if(BMI>=40){printf("height%.2f weight%.2f BMI%.2f\n\"Obesity (4th-degree"\",h,w,BMI);}
	}return 0; }