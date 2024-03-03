#include <stdio.h>
#include <stdlib.h>
double f(double a) {
    double val;
    val = -(a*a)+(3*a);
    return val; }
double g(double a) {
    double val;
    val = 2*a*a*a -a*a-5*a;
    return val; }
double absolute(double a) {
    if(a<0) {
    return -a; }
    else
    return a; }
int main() {
	int n,i;
	double a,b,interval,term,sum=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	interval = (b-a)/n;
	for(i=0;i<n;i++) {
	    term = absolute(f(a+i*interval)-g(a+i*interval))*interval;
	    sum = sum + interval; }
	printf("%f",sum);
	return 0; }