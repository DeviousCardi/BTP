#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	double a,b,h,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	h=(b-a)/n;
	double f,area=0;
	for(i=a;i<b;i=i+h) {
	    if(i<=-1) {
	        f=1;
	        area=f*h + area; }
	    else
	    if(i>-1 && i<1) {
	        f=i*i;
	        area=f*h +area; }
	    else {
	        f=i*i*i;
	        area=f*h + area; } }
	printf("%0.4lf",area);
	return 0; }