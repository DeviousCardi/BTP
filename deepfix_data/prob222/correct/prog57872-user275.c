#include <stdio.h>
int main()
{   float a1,b1,c1;
	float a2,b2,c2;
	float a3,b3,c3;
	scanf("%f%f%f",&a1,&b1,&c1);
	scanf("%f%f%f",&a2,&b2,&c2);
	a3=0.8*a1+0.6*a2;
	b3=0.8*b1+0.6*b2;
	c3=0.8*c1+0.6*c2;
	if (a3>b3){
	    if (a3<c3){
	        printf("Median weighted score = %.2f",a3); }
	    else if (b3>c3){
	        printf("Median weighted score = %.2f",b3); }
	    else{
	        printf("Median weighted score = %.2f",c3); } }
	else if (a3<b3){
	    if (c3>b3){
	        printf("Median weighted score = %.2f",b3); }
	    else if (c3>a3){
	        printf("Median weighted score = %.2f",a3); }
	    else{
	        printf("Median weighted score = %.2f",c3); } }
	else{
	    printf("Median weighted score = %.2f",a3); }
	return 0; }