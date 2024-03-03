#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double mod (double a)
{    double b;
    if (a<0)
    b= (-a);
    else
    b=a;
    return b; }
int main() {
    double a,b,dx,r,f,g,sum=0;
    int n,i;
	scanf("%lf%lf%n",&a,&b,&n);
	dx=(b-a)/n;
	for (i=0;i<n;i++) {
	    r= a + (i*dx) ;
	    f= -(r*r) + (3*r);
	    g= (2*r*r*r) - (r*r) - (5*r) ;
	    sum = sum + (abs(f-g))*r; }
	printf("%.4lf",&sum);
	return 0; }