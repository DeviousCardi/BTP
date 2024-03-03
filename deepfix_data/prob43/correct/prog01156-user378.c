#include <stdio.h>
#include <stdlib.h>
double f(double x) {
    f(x)== -(x*x)+3*x;
    return x; }
double g(double x) {
    g(x)== 2*x*x*x-x*x-5*x;
    return x; }
int main() {
    double a,b,s,i,area=0;
    int n;
    scanf ("%lf",&a);
    scanf ("%lf",&b);
    scanf ("%d",&n);
    s=(b-a)/n;
    for (i=a;i<=b;i++) {
       if ((f(i)-g(i))<0) {
           (f(i)-g(i))==(f(i)-g(i))*(-1); }
       area=area + (f(i)-g(i))*s; }
    printf ("%lf", area);
	return 0; }