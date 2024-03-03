#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	double f;
	double a,b,d,area;
	area=0;
	scanf("%lf %lf %d",&a,&b,&n);
	d=(b-a)/n;
	for(i=0;i<n;i++) {
	    double x =a+(i)*d;
	     if (x<=-1)
	     f=1;
    else if (x>-1 && x<1)
    f=(x*x);
    else if (x>=1)
    f=x*x*x;
	area=area + (d*f);}
	printf("%lf",area);
	return 0; }