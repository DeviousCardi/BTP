#include <stdio.h>
#include <stdlib.h>
double mod(double r) {
    double q;
    if(r>=0)
    q=r;
    else
    q=(-r);
    return q; }
int main() {
	double a,b;
	int n;
	scanf("%lf%lf%d",&a,&b,&n);
	double x[n+1];
	int i;
	int j;
	double dx=(b-a)/n;
	for(i=0;i<=n;i++)
	x[i]=a+dx*i;
	double f,g;
	double t;
	double y=0;
	for(j=0;j<=n;j++) {
	    f=-(x[j]*x[j])+3*x[j];
	    g=2*(x[j]*x[j]*x[j])-(x[j]*x[j])-5*x[j];
	    t=(mod(f-g))*dx;
	    y=y+t; }
	printf("%.4lf",y);
	return 0; }