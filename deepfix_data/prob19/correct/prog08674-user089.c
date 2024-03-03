#include <stdio.h>
int main() {
    float h,w,bmi;
    scanf("%f",&h);
    scanf("%f",&w);
    bmi=(w/(h*h));
    printf("%.2f,%.2f,%.2f/n",w,bmi);
    if(bmi<18.5)
    printf("\"You have low weight\"");
    if((18.5<=bmi)&&(bmi<25))
    printf("\"You have normal weight\"");
    if((25<=bmi)&&(bmi<30))
    printf("\"Obesity(1st-degree)\"");
    if((30<=bmi)&&(bmi<35))
    printf("\"Obesity(2nd-degree)\"");
    if((35<=bmi)&&(bmi<40))
    printf("\"Obesity(3rd-degree)\"");
    if(bmi>=40)
    printf("\"Obesity(4th-degree)\"");
	return 0; }