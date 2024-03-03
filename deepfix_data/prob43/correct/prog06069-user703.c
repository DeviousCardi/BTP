#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double epsilon=0.000001;
int main() {
	double a,b,sum=0;
	int n;
	int i;
	double x[n+1];
	for(i=0;i<=n;i++)x[i]=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	for(i=0;i<=n;i++){x[i]=a+(i*((b-a)/n));}
	for(i=0;i<n;i++){
	    sum =  ((b-a)/n)*abs(x[i]*(8-2*x[i]*x[i])); }
	    printf("%.4lf",sum);
	return 0; }