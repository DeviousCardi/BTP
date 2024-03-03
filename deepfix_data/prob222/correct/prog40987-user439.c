#include <stdio.h>
int main() {
	float a1,b1,c1,a2,b2,c2;
	scanf("%f%f%f",&a1,&b1,&c1);
	scanf("%f%f%f",&a2,&b2,&c2);
	float a,b,c;
	a = a1*(40/50) + a2*(60/100);
	b = b1*(40/50) + b2*(60/100);
	c = c1*(40/50) + c2*(60/100);
	if (a>b) {
	    if (b>c) {
	        printf ("%f",b); }
	    else {
	        if (c>a)
	        printf ("%f",a);
	        else
	        printf ("%f",c); } }
	else {
	    if (a>c) {
	        printf("%f",a); }
	    else {
	        if (b>c)
	        printf ("%f",c);
	        else
	        printf ("%f",b); } }
	return 0; }