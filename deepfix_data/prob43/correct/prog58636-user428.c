#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double a,b,dx,r,f,h,g,sum=0.0;
    int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	dx=(b-a)/n;
	for (i=0;i<n;i++) {
	    r= a + (i*dx) ;
	    f= (3*r) - (r*r);
	    g= (2*r*r*r) - (r*r) - (5*r) ;
	    h= abs(f-g);
	    sum = sum + h; }
	printf("%.4lf",sum*dx);
	return 0; }