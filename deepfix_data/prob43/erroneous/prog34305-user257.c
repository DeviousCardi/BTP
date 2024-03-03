#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int mod(int a) {
    if (a<0)
       return (-a);
       else return a; }
double f(double x) {
    double a;
    a=-(pow(x,2))+3*x;
    return a; }
double g(double x) {
    double a;
    a=2*pow(x,3)-pow(x,2)-5*x;
    return a; }
int main() {
	double a,b,area=0.0,d,da;
	int i,n;
	scanf ("%lf%lf%d",&a,&b,&n);
	d=(b-a)/n;
	for (i=0;i<n;i++) {
	    da=[mod(f(a+i*d)-g(a+i*d))]*d;
	    area=area+da; }
	printf ("%f",area);
	return 0; }