#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x){
    double y;
    y= -x*x+3*x;
    return y; }
double g(double z){
    double s;
    s= 2*z*z*z-z*z-5*z;
    return s; }
int main() {
	int n,i,j;
	double a,b,dx,x[10000],S=0;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	dx=((b-a)/n);
	for(j=1;j<=n;j++) {
	    x[j]=(a+j*dx); }
	for(i=0;i<n;i++) {
	    S=S+(abs(f(x[i])-g(x[i])))*dx; }
	printf("%.4lf",S);
	return 0; }