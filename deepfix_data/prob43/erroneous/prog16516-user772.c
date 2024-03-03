#include <stdio.h>
#include <stdlib.h>
double f(double x);
double f(double x) {
    double value=0;
    value=(-x*x)+3*x;
    return value; }
double g(double x);
double g(double x) {
    double value=0;
    value=2*x*x*x-x*x-5*x;
    return value; }
int main() {
    double a,b;
    int n;
    scanf("%lf%lf",&a,&b);
    scanf("%d",&n);
    double l;
    l=(b-a)/n;
    float A=0.0,B=0.0;
    float sum1=0.0,sum2=0.0;
    float i=a;
    while (i>=a) {
        if (f(i)>g(i)) {
            A=(f(i)-g(i))*l;
            sum1=sum1+A; }
        else (g(i)>f(i)) {
            B=(g(i)-f(i))*l;
            sum2=sum2+B; }
        i=i+l; }
    printf("%lf",sum1+sum2);
	return 0; }