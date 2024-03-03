#include <stdio.h>
#include <stdlib.h>
int main() {
	const double epsilon =0.000001;
	double a, b, area=0.0000, dx, x, fx;
	int n, i;
	scanf("%lf %lf %d",  &a, &b, &n);
	dx=(b-a)/n;
	for(i=0;i<n;i++) {
	    x=a + i*dx;
	    if(x<=-1.00000-epsilon)
	        fx=1.0000000;
	    else if (x>=1.00000+epsilon)
	        fx=x*x*x;
	    else
	        fx=x*x;
	    area+=fx*dx; }
	printf("%lf", area);
	return 0; }