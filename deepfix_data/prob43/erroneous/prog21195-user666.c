#include <stdio.h>
#include <stdlib.h>
double fg(double x) {
    double z;
    z=2*x*x*x-8*x;
    return z; }
int main() {
	double a,b,A;int n;
	scanf("%lf%lf%d",a,b,n);
	double delx,delA;
	delx=(b-a)/n;
	A=0;
	for(i=0;i<n;i=i+1) {
	    delA=fg(a+i*(delx));
	    if(delA<0){delA=-delA;}
	    A=A+delA; }
	printf("%.4lf",A);
	return 0; }