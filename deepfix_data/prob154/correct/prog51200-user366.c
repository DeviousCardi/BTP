#include <stdio.h>
#include <stdlib.h>
double func(double x) {
    double y;
    if(x<=-1)
    y=1;
    else if(x>=1)
    y=x*x*x;
    else y=x*x;
    return y; }
int main() {
	double a,b,r,h,d;
	int n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double X[100];
	h=(b-a)/n;
	r=0;
	int i;
	for(i=0;i<n;i++) {
	X[i]=a+(((b-a)/n)*i);
	d=X[i];
	r=r+func(d)*h; }
	printf("%.4lf",r);
	return 0; }