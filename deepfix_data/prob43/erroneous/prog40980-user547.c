#include <stdio.h>
#include <stdlib.h>
double power(double p, int q) {
    int i;
    double product = 1.0;
    for (i=1;i<=q;i++) {
        product=product*p; }
    return product; }
double mod(double x) {
    double val = (x>0) ? x : -x;
    return val; }
int main() {
    double a, b, sum = 0;
    int n, i;
    double y = (b-a)/n;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    double m[1000];
    for (i=0;i<n;i++) {
        f[i] = ((-1*power(i,2)) +(3*i));
        g[i] = ((2*power(i,3)) - (power(i,2)) - (5*i));
        h[i] = mod(f[i]-g[i]);
        t[i] = h[i]*y;
        sum = sum + t[i]; }
	return 0; }