#include <stdio.h>
int main() {
    float w,h,b,h1;
    scanf("%f %f",&h1,&w);
    h=h1*0.01;
    b=w/(h*h);
    printf("%.2f m, %.2f kg: BMI = %.2f\n",h,w,b);
    if(b<18.5)
        printf("You have low weight");
    else if(b>=18.5 && b<25.0)
        printf("You have normal weight");
    else if(b>=25.0 && b<30.0)
        printf("Obesity (1st-degree)");
    else if(b>=30.0 && b<35.0)
        printf("Obesity (2nd-degree)");
    else if(b>=35.0 && b<40.0)
        printf("Obesity (3rd-degree)");
    else
        printf("Obesity (4th-degree)");
	return 0; }