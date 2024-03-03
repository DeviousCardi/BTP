#include <stdio.h>
#include <stdlib.h>
#include<math.h>
double f(double a){
    double c;
    c = -a*a + 3*a;
    return c; }
double g(double a){
    double d;
    d = 2*a*a*a-a*a-5*a;
    return d; }
int main() {
	int n, i;
	double a, b;
	scanf("%lf %lf %d", &a, &b, &n);
	double c[n+1], f1[n+1], g1[n+1], x, area =0;
	x = (b-a)/n;
	for(i=0;i<n+1;i++) {
	    c[i]= a + (1.0*i)/n;
	    f1[i]= f(c[i]);
	    g1[i]= g(c[i]);
	    printf("dbg %lf %lf = %lf\n", f1[i], g1[i], c[i]);
	    area = area + abs(f1[i]-g1[i])*x; }
	printf("%.4lf", area);
	return 0; }