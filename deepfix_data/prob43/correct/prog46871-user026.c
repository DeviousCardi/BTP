#include <stdio.h>
#include <stdlib.h>
double f_function(double v1) {
    double m1;
    m1= -(v1*v1)+(3*v1);
    return m1; }
double g_function(double v2) {
    double m2;
    m2=(2*v2*v2*v2)-(v2*v2)-(5*v2);
    return m2; }
int main() {
	double a,b,fxi,gxi,s,dx,c;
	double sum=0.0;
	int i,n;
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%d",&n);
	dx=(b-a)/n;
	printf("%lf",dx);
	c=a;
	for(i=0;i<n;i++) {
	  fxi=f_function(c);
	  gxi=g_function(c);
	  s=(abs)((fxi-gxi))*(dx);
	  sum=sum+s;
	  c=c+dx; }
	 printf("%.4lf",sum);
	return 0; }