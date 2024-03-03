#include <stdio.h>
#include <stdlib.h>
double func(double x) {
    double y;
    if(a<=-1)
    y=1;
    else if(a>=1)
    y=x*x*x;
    else y=x*x;
    return y; }
int main() {
	double a,b,r,h;
	scanf("%lf",&a);
	scanf("%lf"&b);
	scanf("%d"&n);
	double X[100];
	h=(b-a)/n;
	r=0;
	int n,i,j,k;
	for(i=0;i<n;i++) {
	X[i]=a+(((b-a)/n)*i);
	r=r+f(X[i])*h; }
	printf("%.4lf",r);
	return 0; }