#include <stdio.h>
#include <stdlib.h>
const double e=0.000001;
double f(double a) {
    if(a<=-1+e)
        return 1;
    else if(a>=1-e)
        return a*a*a;
    else
        return a*a; }
int main() {
	double a,b,dx,sum=0;
	int n,i;
	scanf("%lf%lf%d",&a,&b,&n);
	dx=(b-a)/n;
	for(i=0;i<n;i++) {
	    sum=sum+(f(a+(i*dx))*dx); }
	printf("%.4lf",sum);
	return 0; }