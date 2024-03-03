#include <stdio.h>
#include <stdlib.h>
double f(double x) {
    double d;
    if(x<=-1) {
        d=1*t; }
    if(-1<x<1) {
        d=x*x*t; }
    if(x>=1) {
        d=x*x*x*t; }
    return d; }
int main() {
	double s,a,b,public t;int n;
	scanf("%lf%lf%d",&a&b&n);
	t=(b-a)/n;
	for(i=0;i<n;i++) {
	    s=s+f(a+i*t); }
	printf("%lf",s);
	return 0; }