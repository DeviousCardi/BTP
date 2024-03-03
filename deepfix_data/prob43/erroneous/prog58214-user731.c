#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,i;
	double a,b;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double l;
	l=(b-a)/n;
	double area;
	area=0;
double gx(double y) {
    return ((2*pow(y,3))-(5*y)-pow(y,2)); }
double fx(double x) {
    return ((3*y)-pow(x,2)); }
	    for(i=a;i<b;i=i+l) {
	        if(gx(i)>=fx(i))
	        area=area+((gx(i)-fx(i))*l);
	        else
	        area=area-((gx(i)-fx(i))*l); }
	    printf("%0.4lf",area);
	return 0; }