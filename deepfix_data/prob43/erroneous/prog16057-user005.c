#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double f(double a){
    double c;
    c = -a*a + 3*a;
    return c; }
double g(double b){
    double d;
    d = 2*a*a*a-a*a-5*a;
    return d; }
int main() {
	int n, i;
	double a, b;
	scanf("%lf %lf %d", &a, &b, &n);
	double a[n], f[n], g[n], x, area =0;
	x = (b-a)/n;
	for(i=0;i<n;i++) {
	    a[i]= a + (1.0*i)/n;
	    f[i]= f(a[i]);
	    g[i]= g(a[i]);
	    area = area + abs(f[i]-g[i])*x; }
	printf("%.4lf", area);
	return 0; }