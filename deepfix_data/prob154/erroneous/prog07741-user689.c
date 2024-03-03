#include <stdio.h>
#include <stdlib.h>
double func(double x) {
    if(x<= -1) {
        return 1; }
    else if(x> -1&& x<1) {
        return x*x; }
    else {
        return x*x*x; } }
int main() {
    int n;int i=0;
    double a,b,area;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%d",&n);
    double x[i];
    x[i] = a + i*((b-a)/n);
    area = 0.0;
    while(i<n) {
        area = area + func(a + i*((b-a)/n);)*(a + i*((b-a)/n););
        i++; }
    printf("%lf",area);
	return 0; }