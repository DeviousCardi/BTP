#include <stdio.h>
int main() {
    float h,b,w;
    scanf("%f %f",&h,&w);
    h=h/100;
    b=w/(h*h);
    b=b*1000;
    printf(" %f\n",b);
    printf("%.2f, %.2f kg: BMI = %.2f\n",h,w,b);
    if(b<18.5)
    printf("You have low weight");
    else if(b>=18.5&&b<25)
    printf("You have normal weight");
    else if(b>=25&&b<30)
    printf("Obesity (1st-degreee");
    else if(b>30&&b<35)
    printf("Obesity (2nd-degreee");
    else if(b>=35&&b<40)
    printf("Obesity (3st-degreee
    else if(b>=40)
    printf("Obesity (4st-degreee");
	return 0; }