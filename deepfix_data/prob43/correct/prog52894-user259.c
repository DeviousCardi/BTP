#include <stdio.h>
#include <stdlib.h>
double fx(double);
double gx(double);
double dif(double,double);
const double epsilon = 0.000001;
int main() {
	double a,b;
	printf("%lf",fx(2.0));
	int n,i;
	scanf("%lf %lf %d",&a,&b,&n);
	double x0=a;
	double dx=(b-a)/n;
	double area=dif(fx(x0),gx(x0))*dx;
	for(i=1;i<=n-1;i++); {
	    x0=x0+dx;
	    area=area+dif(fx(x0),gx(x0))*dx; }
	return 0; }
double fx(double x) {
    return (-x*x+3*x); }
double gx(double x) {
    return (2*x*x*x-x*x-5*x); }
double dif(double x,double y) {
    if(x-y>0)
    return (x-y);
    return (y-x); }