#include <stdio.h>
int main(){
float h,w;
scanf("%f%f",&h,&w);
float B=((w*100*100)/(h*h));
if(B<18.5){printf("\"You have low weight\"");}
if(B>=18.5 && B<25){printf("\"You have normal weight\"");}
if(B>=25 && B<30){printf("\"Obesity(1st-degree)\"");}
if(B>=30 && B<35){printf("\"Obesity(2st-degree)\"");}
if(B>=35 && B<40){printf("\"Obesity(3st-degree)\"");}
if(B>=40){printf("\"Obesity(4st-degree)\"");}
	return 0; }