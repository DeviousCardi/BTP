#include <stdio.h>
#include <stdlib.h>
double modulus (double x) {
    if (x<0)
    {x=x*(-1);}
    else
    {x=x;}
    return x; }
double f(double x) {
    x=-x*x+3*x;
    return x; }
double g(double x) {
    x=2*x*x*x-x*x-5*x;
    return x; }
int main () {
    double a,b,i;
    double q=0;
    double area=0;
    int n;
    scanf ("%lf",&a);
    scanf ("%lf",&b);
    scanf ("%d",&n);
    for (i=a;i<b;i++) {
        q=q+modulus(f(i)-g(i)); }
    area=area+q*((b-a)/n);
    printf ("%0.4lf",area);
	return 0; }