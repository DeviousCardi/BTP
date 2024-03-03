#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x) {
    f(x)==(-1)*pow(x,2)+3*x;
    return double f(x); }
 double g(double x) {
     g(x)==2*pow(x,3)-pow(x,2)-5*x;
     return double g(x); }
int main() {
	double a,b,k,i,sum;
	double sum1=0;
	double sum2=0;i,sum;
	int n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	k=(b-a)/n;
	for(i=a;i<=b;i++) {
	    if(f(i)>g(i)) {
	      sum1=sum1+(f(i)-g(i)); }
	    else(f(i)<g(i)) {
	       sum2=sum2+(g(i)-f(i)); } }
	sum=(sum1+sum2)*k;
	printf("%.4lf",sum);
	return 0; }