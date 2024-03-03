#include <stdio.h>
#include <stdlib.h>
double f(double x) {
    double m,epsilon=.000001;
    if(x<=-1+epsilon) {
        return 1; }
    elseif(x>=(1-epsilon)) {
        m=x*x*x;
        return m; }
    else {
        m=x*x;
        return m } }
int main() {
	double a,b,h,sum=0;
	int n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	h=(b-a)/n;
	for(i=0;i<n;i++) {
	    sum=sum+(f(a+i*h))*h; }
	printf("%.4lf",sum);
	return 0; }