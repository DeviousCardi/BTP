#include <stdio.h>
int main()
{   float ht,wt,BMI;
    scanf("%f %f",&ht,&wt);
    BMI=(wt)/(ht)*(ht);
    if(BMI<18.5){
        printf("\"You have low weight\"");
    }else if(18.5<=BMI&&BMI<25){
        printf("\"You have normal weight\"");
    }else if(25<=BMI&&BMI<30){
        printf("\"Obesity (1st-degree)\"");
    }else if(30<=BMI&&BMI<35){
        printf("\"Obesity (2nd-degree)\"");
    }else if(35<=BMI&&BMI<40){
        printf("\"Obesity (3rd-degree)\"");
    }else{
        printf("\"Obesity (4th-degree)\""); }
	return 0; }