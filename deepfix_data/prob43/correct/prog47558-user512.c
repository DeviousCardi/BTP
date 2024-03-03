#include <stdio.h>
#include <stdlib.h>
double f(double x) {
    return ( (3*x)-(x*x) ); }
double g(double x) {
    return ((2*(x*x*x))-(x*x)-(5*x)); }
int main() {
	int i,n,t;
	double a,b,area=0,intv;
	scanf("%lf",&a);
	scanf("%lf%d",&b,&n);
	intv=(b-a)/n;
	for(i=0;i<n;i++)
	{   t=(a+(intv*i));
	    if(t<0) {
	        area=area + ((g(t)-f(t))*intv); }
	    else {
	      area=area + ((f(t)-g(t))*intv); } }
	printf("%.4lf",area);
	return 0; }