#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double f(double x) {
    double fx=-x*x+3*x;
    return fx; }
double g(double x) {
    double gx=2*x*x*x-x*x-5*x;
    return gx; }
int main() {
	int t=abs(-2); printf("%d",t);
	double a,b,w,A,x;
	int n,i;
	scanf("%lf%lf%d",&a,&b,&n);
	w=(b-a)/n;
	for(i=0;i<n;i++) {
	    x=a+i*w;
	    A+=abs(f(x)-g(x))*w; }
	printf("%.4lf",A);
	return 0; }