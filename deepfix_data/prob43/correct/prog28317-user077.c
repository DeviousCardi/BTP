#include <stdio.h>
#include <stdlib.h>
int f(double x) {
    double c;
    c= -(x*x)+(3*x);
    return c; }
int g(double x){
    double d;
    d = (2*x*x*x)-(x*x)-(5*x);
    return d; }
int mod(double x){
    if (x>=0)
    return x;
    else return -x; }
int main() {
	double a,b;
	int n;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%d", &n);
	double x=a;
	float h = (b-a)/n;
	double s=0;
	int i;
	for (i=0;i<=n-1;i++) {
	    s=s+(mod(f(x)-g(x))*h);
	    x=x+h;
	    printf("%lf\n", s);}
	printf("%.4lf", s);
	return 0; }