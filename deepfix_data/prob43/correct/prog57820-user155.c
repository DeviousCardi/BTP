#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,x,fx,s=0.0;
	double dx;
	int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	dx=((b-a)/n);
	for(i=0;i<n;i++) {
	    x=a+((dx)*i);
	    fx=(2*x*x*x)-(8*x);
	    if(fx<0.0000001) {
	        fx=(-fx); }
	    s=s+((fx)*(dx)); }
	printf("%0.4lf",s);
	return 0; }