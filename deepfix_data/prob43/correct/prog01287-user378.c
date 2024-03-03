#include <stdio.h>
#include <stdlib.h>
int main() {
    double a,b,s,i,area=0;
    int n;
    scanf ("%lf",&a);
    scanf ("%lf",&b);
    scanf ("%d",&n);
    s=(b-a)/n;
    for (i=a;i<=b;i++) {
        double p= -2*i*i*i+8*i;
        if (p<0) {
            p=p*(-1); }
        if (p>0) {
            p=p; }
        area=area+(p*s); }
    printf ("%0.4lf", area);
	return 0; }