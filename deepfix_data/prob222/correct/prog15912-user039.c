#include <stdio.h>
int main() {
    float a,b,c;
    float p,q,r;
	float A,B,C;
	scanf("%f%f%f\n",&a,&b,&c);
	scanf("%f%f%f",&p,&q,&r);
	A=40/50*a + 60/100*p;
	B=40/50*b + 60/100*q;
	C=40/50*c + 60/100*r;
	printf("Median weighted score=%.2f",A+B+C/3);
	return 0; }