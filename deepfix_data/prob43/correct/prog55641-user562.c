#include <stdio.h>
#include <stdlib.h>
double moddd(double value) {
    if(value>=0)
    return value;
    else {
        value = (-1)*value;
        return value; } }
double func(double x2) {
    double ret;
    ret=moddd( 8*x2 - 2*x2*x2*x2 );
    return ret; }
double area_f(double a1,double b1,int n1) {
    double delta_x,sum=0.0,i,x1=a1;
    delta_x=((b1-a1)/n1);
    for(i=0;i<n1;i++) {
        sum=sum+(func(x1)*delta_x);
        x1=x1+delta_x; }
    return sum; }
int main() {
	double a,b,area;
	int n;
	scanf("%lf %lf %d",a,b,n);
	area=area_f(a,b,n);
	printf("%.4lf",area);
	return 0; }