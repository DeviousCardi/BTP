#include <stdio.h>
#include <stdlib.h>
int f(x) {
    int c;
    c= -(x*x)+(3*x);
    return c; }
int g(y){
    int d;
    d = (2*y*y*y)-(y*y)-(5*y);
    return d; }
int mod(x){
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
	for (i=0;i<n;i++) {
	    s=s+(mod(f(x)-g(x))*h);
	    x=x+h;  }
	printf("%.4lf", s);
	return 0; }