#include <stdio.h>
int main()
{   float h,w,BMI;
    scanf("%f %f",&h,&w);
    BMI=w*10000/(h*h);
    if(BMI,18.5)
    printf("\"You have low weight\"");
    else if(18.5<=BMI<25)
    printf("\"You have normal weight\"");
    else if(25<=BMI<30)
    printf("\"Obesity (1st-degree)\"");
	else if(30<=BMI<35)
	printf("\"Obesity (2nd-degree)\"");
	else if(35<=BMI<40)
	printf("\"Obesity (3rd-degree)\"");
	else
	printf("\"Obesity (4th-degree)\"");
	return 0; }