#include <stdio.h>
int main(){
float h,w;
float H=h/100;
scanf("%f%f",&h,&w);
float B=(w/(H*H));
if(B<18.5){printf("\"You have low weight\"");}
if(B>=18.5 && B<25){printf("%.2f %.2f %.2f",H,w,B\n);
 printf("\"You have normal weight\"");}
if(B>=25 && B<30){printf("%.2f %. %.2f",H,w,B\n);
printf("\"Obesity(1st-degree)\"");}
if(B>=30 && B<35){printf("%.2f %.2f %.2f",H,w,B\n);
printf("\"Obesity(2st-degree)\"");}
if(B>=35 && B<40){printf("%.2f %.2f %.2f",H,w,B\n);
printf("\"Obesity(3st-degree)\"");}
if(B>=40){printf("%.2f %.2f %.2f",H,w,B\n);
printf("\"Obesity(4st-degree)\"");}
	return 0; }