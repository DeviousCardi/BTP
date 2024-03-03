#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double ffunction(double v1) {
    double m1;
    m1= -(v1*v1)+(3*v1);
    return m1; }
double gfunction(double v2) {
    double m2;
    m2=(2*v2*v2*v2)-(v2*v2)-(5*v2);
    return m2; }
int main() {
	double a,b,fxi,gxi,s;
	double sum=0.0;
	int i,n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	  fxi=ffunction((i*1.0)/n);
	  gxi=gfunction((i*1.0)/n);
	  s=(abs((fxi-gxi)))*(1.0/n);
	  sum=sum+s; }
	return 0;
    printf("%.4lf",sum); }