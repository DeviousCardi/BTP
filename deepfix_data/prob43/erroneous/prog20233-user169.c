#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double g(double);
double f(double);
int main() {
	int n;
	double a,b,area,Dx,T,x;
	area=0;
	scanf("%lf %lf %d",&a,&b,&n);
	Dx= (b-a)/n;
	for(i=0;i<(n-1);i++) {
	    x=a+(i*Dx);
	    if(x<0)
	    T=(g(x)-f(x))*Dx;
	    else
	    T=(f(x)-g(x))*Dx;
	    area=area+T; }
	printf("%.4lf",area);
	return 0; }
double g(double x) {
    double A;
    A=2*pow(x,3)-pow(x,2)-5*x;
    return A; }
double f(double x) {
    double A;
    A=(-1)*pow(x,2)+3*x;
    return A; }