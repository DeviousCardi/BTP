#include <stdio.h>
int main()
{   float a1,b1,c1;
	float a2,b2,c2;
	float a3,b3,c3;
	scanf("%f%f%f",&a1,&b1,&c1);
	scanf("%f%f%f",&a2,&b2,&c2);
	a3=40*a1/50+60*a2/100;
	b3=40*b1/50+60*b2/100;
	c3=40*c1/50+60*c2/100;
	if (a3>b3){
	    if (a3<c3){
	        printf("Median weighted score = %.2f",a3); }
	    else if (b3>c3){
	        printf("Median weighted score = %.2f",b3); }
	    else{
	        printf("Median weighted score = %.2f",c3); } }
	else {
	    if (c3>b3){
	        printf("Median weighted score = %.2f",b3); }
	    else if (c3>a3){
	        printf("Median weighted score = %.2f",a3); }
	    else{
	        printf("Median weighted score = %.2f",c3); } }
	return 0; }