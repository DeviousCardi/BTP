#include <stdio.h>
#include <stdlib.h>
double modd(double value) {
    if(value>=0)
    return value;
    else {
        value = (-1)*value;
        return value; } }
double func(double x2) {
    double ret;
    ret=modd( 8*x2 - 2*x2*x2*x2 );
    return ret; }
int main() {
	double a,b;
	int n;
	scanf("%lf %lf %d",a,b,n);
	double delta_x,sum=0.0,i,x1;
    x1=a1;
    delta_x=((b1-a1)/n1);
    for(i=0;i<n1;i++) {
        sum=sum+(func(x1)*delta_x);
        x1=x1+delta_x; }
	return 0; }