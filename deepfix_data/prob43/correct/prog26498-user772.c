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
    double a;
    scanf("%lf",&a);
    printf("%lf",g(a));
	return 0; }