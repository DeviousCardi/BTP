#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double a,b,i,j;
	int n;
	scanf("%lf%lf%d",&a,&b,&n);
	double dx=(b-a)/n;
	double fx=0.0,gx=0.0;
	for(i=a;i<=b;i=dx{
	    fx+=-i*i+3*i; }
	for(j=a;j<=b;j=dx){
	    gx+=2*j*j*j-j*j-5*j; }
	double area=fabs(f(x)-g(x))*dx;
	printf(".4%lf",&area);
	return 0; }