#include <stdio.h>
#include <stdlib.h>
int main() {
double a,b,s=0.0;int n;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%d",n);
double dx=(b-a)/n;
for(i=0;i<n;i++) {
    s=s+mod(f1(a+i*dx)-f2(a+i*dx))*dx; }
printf(".4lf",s);
	return 0; }
double f1(double x) {
    return (-x*x+3*x); }
double f2(double x) {
    return (2*x*x*x-x*x-5*x); }
double mod(double x) {
    if(x>0)
    return x;
    else
    return (x*-1); }