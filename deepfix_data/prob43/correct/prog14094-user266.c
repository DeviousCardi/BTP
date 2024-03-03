#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double );
double g(double );
int main() {
    int i,n;
    double x,a,b,area=0.0;
    scanf("%lf\n",&a);
	scanf("%lf\n",&b);
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    x=a+i*(b-a)/n;
	    area+=fabs(f(x)-g(x))*(b-a)/n; }
	printf("%0.4lf",area);
	return 0; }
double f(double x) {
    return 3*x-x*x; }
double g(double x) {
    return 2*x*x*x-x*x-5*x; }