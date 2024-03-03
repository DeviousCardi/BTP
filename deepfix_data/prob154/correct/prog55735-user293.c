#include <stdio.h>
#include <stdlib.h>
int main() {
	double a,b;
	int n,i;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double delx=(b-a)/n;
	double x[n];
	x[0]=a;
	for(i=1;i<n;i++) {
	    x[i]=x[i-1]+delx; }
	printf("%if",&x[n-1]);
    return 0; }