#include <stdio.h>
#include <stdlib.h>
double modulus (double x) {
    if(x<0)
    {x=x*(-1);}
    else {x=x;}
    return x; }
int main() {
    double a,b,i,q=0,area=0;
    int n;
    scanf ("%lf",&a);
    scanf ("%lf",&b);
    scanf ("%d",&n);
    for (i=a;i<=b-1;i++) {
        double p= 2*i*i*i-8*i;
        q=q+ (modulus(p)); }
    area=q*((b-a)/n);
    printf ("%0.4lf", area);
	return 0; }