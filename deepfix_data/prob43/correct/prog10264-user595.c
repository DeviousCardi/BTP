#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x) {
    double s=-(x*x)+(3*x);
    return s; }
double g(double x) {
    double s=(2*x*x*x)-(x*x)-(5*x);
    return s; }
int main() {
	double a,b,c,add,sum=0.0;
	int n,i;
	scanf("%lf %lf %d",&a,&b,&n);
    printf("%lf %lf %d",a,b,n);
	for(i=0;i<=n;i++) {
	    c=a+((b-a)/n)*i;
	    add=f(c)-g(c);
	    sum=sum+abs(add)*((b-a)/n); }
	printf("%0.4lf",sum);
	return 0; }