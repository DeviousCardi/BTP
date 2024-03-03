#include <stdio.h>
#include <stdlib.h>
double func(double x) {
    double r;
    if(x<=-1) r=1;
    else if(x>=1) r=x*x*x;
    else r=x*x;
    return r; }
int main() {
    int n,i;
    double a,b,t,s;
    scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%d", &n);
    s=0;
    t=(b-a)/n;
	for(i=0;i<n;i++) {
	        s=s+func(a+t*i)*t; }
	printf("%.4lf", s);
	return 0; }