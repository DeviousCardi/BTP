#include <stdio.h>
#include <stdlib.h>
double modulus (double x) {
    if (x<0)
    {x=x*(-1);}
    else
    {x=x;}
    return x; }
int main () {
    double a,b,i;
    double q=0; double p=0;
    double area=0;
    int n;
    scanf ("%lf",&a);
    scanf ("%lf",&b);
    scanf ("%d",&n);
    for (i=a;i<=-1;i++) {
        q=q+(2*i*i*i-8*i); }
    for (i=0;i<=b-1;i++) {
        p=p+(-2*i*i*i+8*i); }
    area=area + (p+q)*((b-a)/n);
    printf ("%0.4lf",area);
	return 0; }