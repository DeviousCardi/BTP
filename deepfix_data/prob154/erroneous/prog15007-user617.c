#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,x;
	double a,b;
	scanf ("%d %lf %lf",&n,&a,&b);
	for (i=0;i<=n-1;i++) {
	    if ( x<=-1)
	       z=(b-a)/n;
	    else if (-1<x<1)
	       z=(b-a)/n*x*x;
	    else (x>=1)
	       z=(b-a)/n*x*x*x; }
	y=y+z;
	printf ("%lf",y);
	return 0; }