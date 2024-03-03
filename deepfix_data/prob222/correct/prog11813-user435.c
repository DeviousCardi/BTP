#include <stdio.h>
int main() {
	float m1; scanf("%f",&m1);
	float m2; scanf("%f",&m2);
	float m3; scanf("%f",&m3);
	float e1; scanf("%f",&e1);
	float e2; scanf("%f",&e2);
	float e3; scanf("%f",&e3);
	float a=40/50.0*m1+60/100.0*e1;
	float b=40/50.0*m2+60/100.0*e2;
	float c=40/50.0*m3+60/100.0*e3;
	if ((b-a)*(c-a)<=0) printf("Median weighted score=%4.2f",a);
	else if ((a-b)*(c-b)<=0) printf("Median weighted score=%4.2f",b);
	else printf("Median weighted score=%4.2f",c);
	return 0; }