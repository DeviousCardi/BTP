#include <stdio.h>
int main()
{   float h,w,b;
    scanf("%f%f",&h,&w);
    h=h/100;
    b=w/(h*h);
    printf("%.2f m, %.2f kg: BMI = %.2f\n",h,w,b);
    if(b<18.5) printf("You have low weight");
    else if(b>=18.5&&b<25) printf("You have normal weight");
    else if(b>=25&&b<30) printf("Obesity (1st-degree)");
    else if(b>=30&&b<35) printf("Obesity (2nd-degree)");
    else if(b>=35&&b<40) printf("Obesity (3rd-degree)");
    else printf("Obesity (4th-degree)");
	return 0; }