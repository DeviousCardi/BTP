#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double mod (double a){
    double b;
    if(a>=0)
    b=a;
    else if(a<0)
    b= (-1)*a;
    return b; }
int main() {
    double a,b,dx,r,f,d,h,g,sum=0.0;
    int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	dx=(b-a)/n;
	for (i=0;i<n;i++) {
	    r= a + (i*dx) ;
	    f= (3*r) - (r*r);
	    g= (2*r*r*r) - (r*r) - (5*r) ;
	    d= (8*r) - (2*r*r*r);
	    h= mod (d);
	    sum = sum + h*dx; }
	printf("%.4lf",sum);
	return 0; }