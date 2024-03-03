#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main() {
	double s,a,b,t;int i,n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	t=(b-a)/n;
	for(i=0;i<n;i++) {
	   f(a+i*t,t); }
	printf("%lf",s);
	return 0; }
void f(double x,double t) {
    double d;
    if(x<=-1) {
        d=1*t; }
    if(-1<x && x<1) {
        d=x*x*t; }
    if(x>=1) {
        d=x*x*x*t; }
    return d; }