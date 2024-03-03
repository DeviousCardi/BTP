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
    double f[1000], g[1000], h[1000], t[1000], s[1000], c[1000];
    double a, b, sum = 0;
    int n, i;
    double y = (b-a)/n;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        c[i] = a + (i*y);
        f[i] = (-1*(power(c[i],2))) +(3*c[i]);
        g[i] = (2*(power(c[i],3))) - (power(c[i],2)) - (5*c[i]);
        s[i] = f[i]-g[i];
        h[i] = mod(s[i]);
        t[i] = h[i]*y;
        sum = sum + t[i]; }
    printf("%.4lf",sum);
	return 0; }