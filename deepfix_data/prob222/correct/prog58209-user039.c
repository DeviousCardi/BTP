#include <stdio.h>
int main() {
    float a,b,c;
    float p,q,r;
	float A,B,C;
	scanf("%f%f%f\n",&a,&b,&c);
	scanf("%f%f%f",&p,&q,&r);
	A=0.8*a + 0.6*p;
	B=0.8*b + 0.6*q;
	C=0.8*c + 0.6*r;
	if(((A<=B) && (B<=C)) ||  ((A>=B) && (B>=C))) {
	    printf("Median weighted score = %.2f",B); }
	if(((B>=A)&&(A>=C)) || ((C>=A)&& (A>=B))) {
	    printf("Median weighted score = %.2f",A); }
	if(((A>=C)&&(C>=B)) || ((B>=C)&&(C>=A))) {
	    printf("Median weighted score = %.2f",C); }
	return 0; }