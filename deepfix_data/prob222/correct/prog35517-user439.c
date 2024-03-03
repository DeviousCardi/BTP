#include <stdio.h>
int main() {
	float a1,b1,c1,a2,b2,c2;
	scanf("%f%f%f/n",&a1,&b1,&c1);
	scanf("%f%f%f",&a2,&b2,&c2);
	float a,b,c;
	a = a1*(40.0/50.0) + a2*(60.0/100.0);
	b = b1*(40.0/50.0) + b2*(60.0/100.0);
	c = c1*(40.0/50.0) + c2*(60.0/100.0);
	if (a>b) {
	    if (b>c) {
	        printf ("Median weighted score = %.2f",b); }
	    else {
	        if (c>a)
	        printf ("Median weighted score = %.2f",a);
	        else
	        printf ("Median weighted score = %.2f",c); } }
	else {
	    if (a>c) {
	        printf("Median weighted score = %.2f",a); }
	    else {
	        if (b>c)
	        printf ("Median weighted score = %.2f",c);
	        else
	        printf ("Median weighted score = %.2f",b); } }
	return 0; }