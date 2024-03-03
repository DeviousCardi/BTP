#include <stdio.h>
#include <stdlib.h>
const double epsilon=0.000001;
double fcn(double x) {
    if(x<=epsilon-1)
    return 1;
    else if(x>-1 && x<1)
    return x*x;
    else if(x>=1+epsilon)
    return x*x*x;
    else
    return 0; }
int main() {
	int n,i;
	double a,b;
	double sum=0.0;
	scanf("%lf %lf %d", &a, &b, &n);
	double incr=(b-a)/n;
	for(i=0;i<n;i++) {
	    sum+=incr*fcn(a+i*incr); }
	printf("%.4lf", sum);
	return 0; }