#include <stdio.h>
#include <stdlib.h>
double f(double x) {
    return ( (3*x)-(x*x) ); }
double g(double x) {
    return ((2*(x*x*x))-(x*x)-(5*x)); }
int main() {
	int i,n;
	double s,t,a,b,area=0,subintv;
	scanf("%lf",&a);
	scanf("%lf%d",&b,&n);
	intv=(b-a)/n;
	subintv=subintv<0?-subintv:subintv;
	for(i=0;i<n;i++)
	{   t=(a+(subintv*i));
	    s=(f(t)-g(t));
	    s=s<0?-s:s;
	    area=area+(s*subintv); }
	printf("%.4lf",area);
	return 0; }