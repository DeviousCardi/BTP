#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x) {
    double tn;
tn=-(x*x)+(3*x);
    return tn; }
double g(double x) {
    double tn;
    tn=(2*x*x*x)-(x*x)-(5*x);
    return tn; }
int main() {
	double a,b,area,d,t;
	int n,i,j;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	double x[n+1];
	x[0]=a;
	x[n]=b;
d=((b-a)/(n+1);
	for(i=1;i<n;i++)
	{x[i]=a+(d*i);}
	area=0;
	for(j=0;j<n;j++){
	    t=abs(f(x[j])-g(x[j]));
	    area=area+t; }
	area=area*d;
	printf("%0.4lf",area);
	return 0; }