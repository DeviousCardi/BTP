#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    double a,b,dx,r,f,g,sum=0.0;
    int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",
	dx=(b-a)/n;
	for (i=0;i<n;i++) {
	    r= a + (i*dx) ;
	    f= -(r*r) + (3*r);
	    g= (2*r*r*r) - (r*r) - (5*r) ;
	    sum = sum + (abs(f-g))*dx;
	    printf("%lf\n",sum); }
	printf("%.4lf",sum);
	return 0; }