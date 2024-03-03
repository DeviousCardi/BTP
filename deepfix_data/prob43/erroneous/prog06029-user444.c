#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,f,g,v,dx,x,A;
	int n,i,;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	dx=(b-a)/n;
	A=0;
	for(i=0;i<(n-1);i++) {
	    x=a+(i*dx);
	    f=-(x*x)+(3*x);
	    g=(2*x*x*x)-(x*x)-(5*x);
	    v=f-g;
	    if(v<0.0)
	    v=-v;
	    A=A+(v*dx); }
	printf("%.4lf", A);
	return 0; }