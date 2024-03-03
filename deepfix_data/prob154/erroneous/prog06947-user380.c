#include <stdio.h>
#include <stdlib.h>
double func(double x);
int main() {
	double a,b;
	int n,i;
	scanf("%lf\n%lf\n%d\n",&a,&b,&n);
	double area=0.0;
	int pnt[1000];
	for(i=0;i<=n;i++) {
	    pnt[i]=a+i*((b-a)/n) }
	for(j=0;j<n;j++) {
	    area=area+(func(pnt[j]))*((b-a)/n); }
	return 0; }
double func(double x) {
    if(x<=(-1))
    return 1;
    if((-1)<x<1)
    return (x*x);
    if(x>=1)
    return (x*x*x); }