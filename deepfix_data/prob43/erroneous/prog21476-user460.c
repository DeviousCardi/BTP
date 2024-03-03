#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b,n,f,g;double ar;
	scanf("%lf %lf %lf",&a,&b,&n);
	double e=(b-a)/n;
	for(i=1,i<=n;i++) {
	    x=a+e*(i-1);
	    f=-x*x+3*x;
	    g=2*x*x*x-x*x-5*x;
	    v=(f-g)>0?(f-g):-(f-g);
	    ar=ar+v*e; }
	printf("%.4lf",ar);
	return 0; }