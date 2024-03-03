#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,area=0,interval,i;
	double x,f,g;
	int n;
	scanf("%lf",a,b);
	interval=(b-a)/n;
	x=a;
	for(i=0;i<n;i++) {
	    f=-(x*x)+3*x;
	    g=(2*x*x*x)-(x*x)-(5*x);
	    if(f>=g) {
	        area=area+f*interval; }
	    else
	        area=area+g*interval;
	   x=x+interval }
	printf("%.4lf",area);
	return 0; }